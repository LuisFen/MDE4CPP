//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPAQUEEXPRESSION_HPP
#define UML_OPAQUEEXPRESSION_HPP

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
	class Behavior;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Parameter;
}

namespace uml 
{
	class Slot;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/ValueSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An OpaqueExpression is a ValueSpecification that specifies the computation of a collection of values either in terms of a UML Behavior or based on a textual statement in a language other than UML
	<p>From package UML::Values.</p> */
	class OpaqueExpression:virtual public ValueSpecification
	{
		public:
 			OpaqueExpression(const OpaqueExpression &) {}
			OpaqueExpression& operator=(OpaqueExpression const&) = delete;

		protected:
			OpaqueExpression(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~OpaqueExpression() {}

			//*********************************
			// Operations
			//*********************************
			
			
			/*!
			 The query isIntegral() tells whether an expression is intended to produce an Integer.
			result = (false)
			<p>From package UML::Values.</p> */ 
			virtual bool isIntegral() = 0;
			
			/*!
			 The query isNonNegative() tells whether an integer expression has a non-negative value.
			self.isIntegral()
			result = (false)
			<p>From package UML::Values.</p> */ 
			virtual bool isNonNegative() = 0;
			
			/*!
			 The query isPositive() tells whether an integer expression has a positive value.
			result = (false)
			self.isIntegral()
			<p>From package UML::Values.</p> */ 
			virtual bool isPositive() = 0;
			
			/*!
			 If the language attribute is not empty, then the size of the body and language arrays must be the same.
			language->notEmpty() implies (_'body'->size() = language->size()) */ 
			virtual bool language_body_size(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The behavior must have exactly one return result parameter.
			behavior <> null implies
			   behavior.ownedParameter->select(direction=ParameterDirectionKind::return)->size() = 1 */ 
			virtual bool one_return_result_parameter(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The behavior may only have return result parameters.
			behavior <> null implies behavior.ownedParameter->select(direction<>ParameterDirectionKind::return)->isEmpty() */ 
			virtual bool only_return_result_parameters(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The query value() gives an integer value for an expression intended to produce one.
			self.isIntegral()
			result = (0)
			<p>From package UML::Values.</p> */ 
			virtual int value() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 A textual definition of the behavior of the OpaqueExpression, possibly in multiple languages.
			<p>From package UML::Values.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getBody() const = 0;
			
			/*!
			 Specifies the languages used to express the textual bodies of the OpaqueExpression.  Languages are matched to body Strings by order. The interpretation of the body depends on the languages. If the languages are unspecified, they may be implicit from the expression body or the context.
			<p>From package UML::Values.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getLanguage() const = 0;
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the behavior of the OpaqueExpression as a UML Behavior.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::Behavior > getBehavior() const = 0;
			
			/*!
			 Specifies the behavior of the OpaqueExpression as a UML Behavior.
			<p>From package UML::Values.</p> */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior_behavior) = 0;
			/*!
			 If an OpaqueExpression is specified using a UML Behavior, then this refers to the single required return Parameter of that Behavior. When the Behavior completes execution, the values on this Parameter give the result of evaluating the OpaqueExpression.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::Parameter > getResult() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 A textual definition of the behavior of the OpaqueExpression, possibly in multiple languages.
			<p>From package UML::Values.</p> */ 
			std::shared_ptr<Bag<std::string> > m_body; /*!
			 Specifies the languages used to express the textual bodies of the OpaqueExpression.  Languages are matched to body Strings by order. The interpretation of the body depends on the languages. If the languages are unspecified, they may be implicit from the expression body or the context.
			<p>From package UML::Values.</p> */ 
			std::shared_ptr<Bag<std::string> > m_language; 
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the behavior of the OpaqueExpression as a UML Behavior.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::Behavior > m_behavior;
			/*!
			 If an OpaqueExpression is specified using a UML Behavior, then this refers to the single required return Parameter of that Behavior. When the Behavior completes execution, the values on this Parameter give the result of evaluating the OpaqueExpression.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::Parameter > m_result;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_OPAQUEEXPRESSION_HPP */
