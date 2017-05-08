#include "ConstraintImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ConstraintImpl::ConstraintImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	m_constrainedElement.reset(new std::vector<std::shared_ptr<uml::Element>>());
	
	
}

ConstraintImpl::~ConstraintImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Constraint "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ConstraintImpl::ConstraintImpl(const ConstraintImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _constrainedElement = obj.getConstrainedElement();
	this->getConstrainedElement()->insert(this->getConstrainedElement()->end(), _constrainedElement->begin(), _constrainedElement->end());

	m_context  = obj.getContext();

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
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
	if(obj.getSpecification()!=nullptr)
	{
		m_specification.reset(dynamic_cast<uml::ValueSpecification*>(obj.getSpecification()->copy()));
	}
}

ecore::EObject *  ConstraintImpl::copy() const
{
	return new ConstraintImpl(*this);
}

std::shared_ptr<ecore::EClass> ConstraintImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getConstraint();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool ConstraintImpl::boolean_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ConstraintImpl::no_side_effects(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ConstraintImpl::not_apply_to_self(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ConstraintImpl::getConstrainedElement() const
{

    return m_constrainedElement;
}


std::shared_ptr<uml::Namespace> ConstraintImpl::getContext() const
{

    return m_context;
}
void ConstraintImpl::setContext(std::shared_ptr<uml::Namespace> _context)
{
    m_context = _context;
}

std::shared_ptr<uml::ValueSpecification> ConstraintImpl::getSpecification() const
{
//assert(m_specification);
    return m_specification;
}
void ConstraintImpl::setSpecification(std::shared_ptr<uml::ValueSpecification> _specification)
{
    m_specification = _specification;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ConstraintImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	_ownedElement->push_back(getSpecification());

	return _ownedElement;
}
std::shared_ptr<uml::Element> ConstraintImpl::getOwner() const
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
std::shared_ptr<uml::Namespace> ConstraintImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getContext()!=nullptr)
	{
		_namespace = getContext();
	}

	return _namespace;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ConstraintImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //534
		case UmlPackage::CONSTRAINT_CONSTRAINEDELEMENT:
			return getConstrainedElement(); //5312
		case UmlPackage::CONSTRAINT_CONTEXT:
			return getContext(); //5313
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //530
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //535
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //536
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //537
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //531
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //532
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //533
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //534
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //538
		case UmlPackage::CONSTRAINT_SPECIFICATION:
			return getSpecification(); //5314
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //535
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //539
	}
	return boost::any();
}