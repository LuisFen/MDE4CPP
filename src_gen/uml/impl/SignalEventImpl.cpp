#include "SignalEventImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "MessageEvent.hpp"

#include "Namespace.hpp"

#include "Package.hpp"

#include "Signal.hpp"

#include "StringExpression.hpp"

#include "TemplateParameter.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
SignalEventImpl::SignalEventImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

SignalEventImpl::~SignalEventImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SignalEvent "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			SignalEventImpl::SignalEventImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:SignalEventImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			SignalEventImpl::SignalEventImpl(std::weak_ptr<uml::Element > par_owner)
			:SignalEventImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			SignalEventImpl::SignalEventImpl(std::weak_ptr<uml::Package > par_owningPackage)
			:SignalEventImpl()
			{
			    m_owningPackage = par_owningPackage;
			}





//Additional constructor for the containments back reference
			SignalEventImpl::SignalEventImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:SignalEventImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}






SignalEventImpl::SignalEventImpl(const SignalEventImpl & obj):SignalEventImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SignalEvent "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_owningPackage  = obj.getOwningPackage();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_signal  = obj.getSignal();

	m_templateParameter  = obj.getTemplateParameter();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  SignalEventImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new SignalEventImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> SignalEventImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getSignalEvent();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::Signal > SignalEventImpl::getSignal() const
{
//assert(m_signal);
    return m_signal;
}
void SignalEventImpl::setSignal(std::shared_ptr<uml::Signal> _signal)
{
    m_signal = _signal;
}

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > SignalEventImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > SignalEventImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > SignalEventImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any SignalEventImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2014
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2010
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2015
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2016
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2017
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2011
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2012
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2013
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //20112
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2014
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2018
		case UmlPackage::SIGNALEVENT_SIGNAL:
			return getSignal(); //20113
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2015
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2019
	}
	return boost::any();
}
