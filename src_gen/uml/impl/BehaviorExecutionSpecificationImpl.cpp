#include "BehaviorExecutionSpecificationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
BehaviorExecutionSpecificationImpl::BehaviorExecutionSpecificationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
}

BehaviorExecutionSpecificationImpl::~BehaviorExecutionSpecificationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete BehaviorExecutionSpecification "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

BehaviorExecutionSpecificationImpl::BehaviorExecutionSpecificationImpl(const BehaviorExecutionSpecificationImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_behavior  = obj.getBehavior();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Lifeline>>> _covered = obj.getCovered();
	this->getCovered()->insert(this->getCovered()->end(), _covered->begin(), _covered->end());

	m_enclosingInteraction  = obj.getEnclosingInteraction();

	m_enclosingOperand  = obj.getEnclosingOperand();

	m_finish  = obj.getFinish();

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_start  = obj.getStart();


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

ecore::EObject *  BehaviorExecutionSpecificationImpl::copy() const
{
	return new BehaviorExecutionSpecificationImpl(*this);
}

std::shared_ptr<ecore::EClass> BehaviorExecutionSpecificationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getBehaviorExecutionSpecification();
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
std::shared_ptr<uml::Behavior> BehaviorExecutionSpecificationImpl::getBehavior() const
{

    return m_behavior;
}
void BehaviorExecutionSpecificationImpl::setBehavior(std::shared_ptr<uml::Behavior> _behavior)
{
    m_behavior = _behavior;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element> BehaviorExecutionSpecificationImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}
std::shared_ptr<uml::Namespace> BehaviorExecutionSpecificationImpl::getNamespace() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> BehaviorExecutionSpecificationImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> generalOrdering = getGeneralOrdering();
	_ownedElement->insert(_ownedElement->end(), generalOrdering->begin(), generalOrdering->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any BehaviorExecutionSpecificationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::BEHAVIOREXECUTIONSPECIFICATION_BEHAVIOR:
			return getBehavior(); //22716
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2274
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //22710
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2270
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //22712
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //22711
		case UmlPackage::EXECUTIONSPECIFICATION_FINISH:
			return getFinish(); //22714
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //22713
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2275
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2276
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2277
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2271
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2272
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2273
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2278
		case UmlPackage::EXECUTIONSPECIFICATION_START:
			return getStart(); //22715
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2279
	}
	return boost::any();
}