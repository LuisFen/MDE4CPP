//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STRINGEXPRESSION_HPP
#define UML_STRINGEXPRESSION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


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
	class Expression;
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
	class Slot;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class TemplateableElement;
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
#include "uml/Expression.hpp"

#include "uml/TemplateableElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A StringExpression is an Expression that specifies a String value that is derived by concatenating a sequence of operands with String values or a sequence of subExpressions, some of which might be template parameters.
	<p>From package UML::Values.</p> */
	class StringExpression:virtual public Expression,virtual public TemplateableElement
	{
		public:
 			StringExpression(const StringExpression &) {}
			StringExpression& operator=(StringExpression const&) = delete;

		protected:
			StringExpression(){}


			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::StringExpression > par_owningExpression);

			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::Slot > par_owningSlot);

			//Additional constructors for the containments back reference

			StringExpression(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StringExpression() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 All the operands of a StringExpression must be LiteralStrings
			operand->forAll (oclIsKindOf (LiteralString)) */ 
			virtual bool operands(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 If a StringExpression has sub-expressions, it cannot have operands and vice versa (this avoids the problem of having to define a collating sequence between operands and subexpressions).
			if subExpression->notEmpty() then operand->isEmpty() else operand->notEmpty() endif */ 
			virtual bool subexpressions(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The StringExpression of which this StringExpression is a subExpression.
			<p>From package UML::Values.</p> */
			virtual std::weak_ptr<uml::StringExpression > getOwningExpression() const = 0;
			
			/*!
			 The StringExpression of which this StringExpression is a subExpression.
			<p>From package UML::Values.</p> */
			virtual void setOwningExpression(std::shared_ptr<uml::StringExpression> _owningExpression_owningExpression) = 0;
			/*!
			 The StringExpressions that constitute this StringExpression.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<Subset<uml::StringExpression, uml::Element>> getSubExpression() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The StringExpression of which this StringExpression is a subExpression.
			<p>From package UML::Values.</p> */
			std::weak_ptr<uml::StringExpression > m_owningExpression;
			/*!
			 The StringExpressions that constitute this StringExpression.
			<p>From package UML::Values.</p> */
			std::shared_ptr<Subset<uml::StringExpression, uml::Element>> m_subExpression;
			

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
#endif /* end of include guard: UML_STRINGEXPRESSION_HPP */
