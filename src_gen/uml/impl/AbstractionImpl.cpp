#include "AbstractionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
AbstractionImpl::AbstractionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
}

AbstractionImpl::~AbstractionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Abstraction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

AbstractionImpl::AbstractionImpl(const AbstractionImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _client = obj.getClient();
	this->getClient()->insert(this->getClient()->end(), _client->begin(), _client->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _relatedElement = obj.getRelatedElement();
	this->getRelatedElement()->insert(this->getRelatedElement()->end(), _relatedElement->begin(), _relatedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _source = obj.getSource();
	this->getSource()->insert(this->getSource()->end(), _source->begin(), _source->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _supplier = obj.getSupplier();
	this->getSupplier()->insert(this->getSupplier()->end(), _supplier->begin(), _supplier->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _target = obj.getTarget();
	this->getTarget()->insert(this->getTarget()->end(), _target->begin(), _target->end());

	m_templateParameter  = obj.getTemplateParameter();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	if(obj.getMapping()!=nullptr)
	{
		m_mapping.reset(dynamic_cast<uml::OpaqueExpression*>(obj.getMapping()->copy()));
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

ecore::EObject *  AbstractionImpl::copy() const
{
	return new AbstractionImpl(*this);
}

std::shared_ptr<ecore::EClass> AbstractionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getAbstraction();
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
std::shared_ptr<uml::OpaqueExpression> AbstractionImpl::getMapping() const
{

    return m_mapping;
}
void AbstractionImpl::setMapping(std::shared_ptr<uml::OpaqueExpression> _mapping)
{
    m_mapping = _mapping;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> AbstractionImpl::getRelatedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _relatedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> source = getSource();
	_relatedElement->insert(_relatedElement->end(), source->begin(), source->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> target = getTarget();
	_relatedElement->insert(_relatedElement->end(), target->begin(), target->end());

	return _relatedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> AbstractionImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_ownedElement->push_back(getMapping());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}
std::shared_ptr<uml::Element> AbstractionImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}
	if(getOwningTemplateParameter()!=nullptr)
	{
		_owner = getOwningTemplateParameter();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> AbstractionImpl::getTarget() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _target(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> supplier = getSupplier();
	_target->insert(_target->end(), supplier->begin(), supplier->end());

	return _target;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> AbstractionImpl::getSource() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _source(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> client = getClient();
	_source->insert(_source->end(), client->begin(), client->end());

	return _source;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any AbstractionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::DEPENDENCY_CLIENT:
			return getClient(); //4215
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //424
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //420
		case UmlPackage::ABSTRACTION_MAPPING:
			return getMapping(); //4217
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //425
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //426
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //427
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //421
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //422
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //423
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //424
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //428
		case UmlPackage::RELATIONSHIP_RELATEDELEMENT:
			return getRelatedElement(); //424
		case UmlPackage::DIRECTEDRELATIONSHIP_SOURCE:
			return getSource(); //425
		case UmlPackage::DEPENDENCY_SUPPLIER:
			return getSupplier(); //4216
		case UmlPackage::DIRECTEDRELATIONSHIP_TARGET:
			return getTarget(); //426
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //425
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //429
	}
	return boost::any();
}