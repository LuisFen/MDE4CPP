#include "InteractionFragmentImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
InteractionFragmentImpl::InteractionFragmentImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	m_covered.reset(new std::vector<std::shared_ptr<uml::Lifeline>>());
	
	
	m_generalOrdering.reset(new std::vector<std::shared_ptr<uml::GeneralOrdering>>());
}

InteractionFragmentImpl::~InteractionFragmentImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete InteractionFragment "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

InteractionFragmentImpl::InteractionFragmentImpl(const InteractionFragmentImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Lifeline>>> _covered = obj.getCovered();
	this->getCovered()->insert(this->getCovered()->end(), _covered->begin(), _covered->end());

	m_enclosingInteraction  = obj.getEnclosingInteraction();

	m_enclosingOperand  = obj.getEnclosingOperand();

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> _generalOrderingList = obj.getGeneralOrdering();
	for(std::shared_ptr<uml::GeneralOrdering> _generalOrdering : *_generalOrderingList)
	{
		this->getGeneralOrdering()->push_back(std::shared_ptr<uml::GeneralOrdering>(dynamic_cast<uml::GeneralOrdering*>(_generalOrdering->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  InteractionFragmentImpl::copy() const
{
	return new InteractionFragmentImpl(*this);
}

std::shared_ptr<ecore::EClass> InteractionFragmentImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getInteractionFragment();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Lifeline>>> InteractionFragmentImpl::getCovered() const
{

    return m_covered;
}


std::shared_ptr<uml::Interaction> InteractionFragmentImpl::getEnclosingInteraction() const
{

    return m_enclosingInteraction;
}
void InteractionFragmentImpl::setEnclosingInteraction(std::shared_ptr<uml::Interaction> _enclosingInteraction)
{
    m_enclosingInteraction = _enclosingInteraction;
}

std::shared_ptr<uml::InteractionOperand> InteractionFragmentImpl::getEnclosingOperand() const
{

    return m_enclosingOperand;
}
void InteractionFragmentImpl::setEnclosingOperand(std::shared_ptr<uml::InteractionOperand> _enclosingOperand)
{
    m_enclosingOperand = _enclosingOperand;
}

std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> InteractionFragmentImpl::getGeneralOrdering() const
{

    return m_generalOrdering;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> InteractionFragmentImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> generalOrdering = getGeneralOrdering();
	_ownedElement->insert(_ownedElement->end(), generalOrdering->begin(), generalOrdering->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}
std::shared_ptr<uml::Namespace> InteractionFragmentImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getEnclosingInteraction()!=nullptr)
	{
		_namespace = getEnclosingInteraction();
	}
	if(getEnclosingOperand()!=nullptr)
	{
		_namespace = getEnclosingOperand();
	}

	return _namespace;
}
std::shared_ptr<uml::Element> InteractionFragmentImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any InteractionFragmentImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2124
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //21210
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2120
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //21212
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //21211
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //21213
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2125
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2126
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2127
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2121
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2122
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2123
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2128
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2129
	}
	return boost::any();
}