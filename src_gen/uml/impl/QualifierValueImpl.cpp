#include "QualifierValueImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
QualifierValueImpl::QualifierValueImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
	
}

QualifierValueImpl::~QualifierValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete QualifierValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

QualifierValueImpl::QualifierValueImpl(const QualifierValueImpl & obj)
{
	//create copy of all Attributes

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_qualifier  = obj.getQualifier();

	m_value  = obj.getValue();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  QualifierValueImpl::copy() const
{
	return new QualifierValueImpl(*this);
}

std::shared_ptr<ecore::EClass> QualifierValueImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getQualifierValue();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool QualifierValueImpl::multiplicity_of_qualifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool QualifierValueImpl::qualifier_attribute(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool QualifierValueImpl::type_of_qualifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::Property> QualifierValueImpl::getQualifier() const
{
//assert(m_qualifier);
    return m_qualifier;
}
void QualifierValueImpl::setQualifier(std::shared_ptr<uml::Property> _qualifier)
{
    m_qualifier = _qualifier;
}

std::shared_ptr<uml::InputPin> QualifierValueImpl::getValue() const
{
//assert(m_value);
    return m_value;
}
void QualifierValueImpl::setValue(std::shared_ptr<uml::InputPin> _value)
{
    m_value = _value;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> QualifierValueImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any QualifierValueImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1270
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1271
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1272
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1273
		case UmlPackage::QUALIFIERVALUE_QUALIFIER:
			return getQualifier(); //1274
		case UmlPackage::QUALIFIERVALUE_VALUE:
			return getValue(); //1275
	}
	return boost::any();
}