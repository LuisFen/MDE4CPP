#include "ExecutionOccurrenceSpecificationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
}

ExecutionOccurrenceSpecificationImpl::~ExecutionOccurrenceSpecificationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ExecutionOccurrenceSpecification "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(const ExecutionOccurrenceSpecificationImpl & obj)
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

	m_execution  = obj.getExecution();

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> _toAfter = obj.getToAfter();
	this->getToAfter()->insert(this->getToAfter()->end(), _toAfter->begin(), _toAfter->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralOrdering>>> _toBefore = obj.getToBefore();
	this->getToBefore()->insert(this->getToBefore()->end(), _toBefore->begin(), _toBefore->end());


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

ecore::EObject *  ExecutionOccurrenceSpecificationImpl::copy() const
{
	return new ExecutionOccurrenceSpecificationImpl(*this);
}

std::shared_ptr<ecore::EClass> ExecutionOccurrenceSpecificationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getExecutionOccurrenceSpecification();
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
std::shared_ptr<uml::ExecutionSpecification> ExecutionOccurrenceSpecificationImpl::getExecution() const
{
//assert(m_execution);
    return m_execution;
}
void ExecutionOccurrenceSpecificationImpl::setExecution(std::shared_ptr<uml::ExecutionSpecification> _execution)
{
    m_execution = _execution;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element> ExecutionOccurrenceSpecificationImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}
std::shared_ptr<uml::Namespace> ExecutionOccurrenceSpecificationImpl::getNamespace() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ExecutionOccurrenceSpecificationImpl::getOwnedElement() const
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
boost::any ExecutionOccurrenceSpecificationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2344
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //23410
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2340
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //23412
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //23411
		case UmlPackage::EXECUTIONOCCURRENCESPECIFICATION_EXECUTION:
			return getExecution(); //23416
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //23413
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2345
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2346
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2347
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2341
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2342
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2343
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2348
		case UmlPackage::OCCURRENCESPECIFICATION_TOAFTER:
			return getToAfter(); //23414
		case UmlPackage::OCCURRENCESPECIFICATION_TOBEFORE:
			return getToBefore(); //23415
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2349
	}
	return boost::any();
}