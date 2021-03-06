//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_QUALIFIERVALUE_HPP
#define UML_QUALIFIERVALUE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class Property;
}

// base class includes
#include "uml/Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A QualifierValue is an Element that is used as part of LinkEndData to provide the value for a single qualifier of the end given by the LinkEndData.
	<p>From package UML::Actions.</p> */
	class QualifierValue:virtual public Element
	{
		public:
 			QualifierValue(const QualifierValue &) {}
			QualifierValue& operator=(QualifierValue const&) = delete;

		protected:
			QualifierValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~QualifierValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the value InputPin is 1..1.
			value.is(1,1) */ 
			virtual bool multiplicity_of_qualifier(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The qualifier must be a qualifier of the Association end of the linkEndData that owns this QualifierValue.
			linkEndData.end.qualifier->includes(qualifier) */ 
			virtual bool qualifier_attribute(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The type of the value InputPin conforms to the type of the qualifier Property.
			value.type.conformsTo(qualifier.type) */ 
			virtual bool type_of_qualifier(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The qualifier Property for which the value is to be specified.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Property > getQualifier() const = 0;
			
			/*!
			 The qualifier Property for which the value is to be specified.
			<p>From package UML::Actions.</p> */
			virtual void setQualifier(std::shared_ptr<uml::Property> _qualifier_qualifier) = 0;
			/*!
			 The InputPin from which the specified value for the qualifier is taken.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getValue() const = 0;
			
			/*!
			 The InputPin from which the specified value for the qualifier is taken.
			<p>From package UML::Actions.</p> */
			virtual void setValue(std::shared_ptr<uml::InputPin> _value_value) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The qualifier Property for which the value is to be specified.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Property > m_qualifier;
			/*!
			 The InputPin from which the specified value for the qualifier is taken.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_value;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_QUALIFIERVALUE_HPP */
