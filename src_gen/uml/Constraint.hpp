//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONSTRAINT_HPP
#define UML_CONSTRAINT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

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
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageableElement;
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
	class ValueSpecification;
}

// base class includes
#include "PackageableElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an Element or set of Elements.
	<p>From package UML::CommonStructure.</p> */
	class Constraint:virtual public PackageableElement
	{
		public:
 			Constraint(const Constraint &) {}
			Constraint& operator=(Constraint const&) = delete;

		protected:
			Constraint(){}


			//Additional constructors for the containments back reference

			Constraint(std::weak_ptr<uml::Namespace > par_Namespace, const int reference_id);

			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference

			Constraint(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Constraint(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			Constraint(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Constraint() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The ValueSpecification for a Constraint must evaluate to a Boolean value. */ 
			virtual bool boolean_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Evaluating the ValueSpecification for a Constraint must not have side effects. */ 
			virtual bool no_side_effects(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A Constraint cannot be applied to itself.
			not constrainedElement->includes(self) */ 
			virtual bool not_apply_to_self(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ordered set of Elements referenced by this Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr< Bag<uml::Element> > getConstrainedElement() const = 0;
			
			/*!
			 Specifies the Namespace that owns the Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getContext() const = 0;
			
			/*!
			 Specifies the Namespace that owns the Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual void setContext(std::shared_ptr<uml::Namespace> _context_context) = 0;
			/*!
			 A condition that must be true when evaluated in order for the Constraint to be satisfied.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getSpecification() const = 0;
			
			/*!
			 A condition that must be true when evaluated in order for the Constraint to be satisfied.
			<p>From package UML::CommonStructure.</p> */
			virtual void setSpecification(std::shared_ptr<uml::ValueSpecification> _specification_specification) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The ordered set of Elements referenced by this Constraint.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr< Bag<uml::Element> > m_constrainedElement;
			/*!
			 Specifies the Namespace that owns the Constraint.
			<p>From package UML::CommonStructure.</p> */
			std::weak_ptr<uml::Namespace > m_context;
			/*!
			 A condition that must be true when evaluated in order for the Constraint to be satisfied.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::ValueSpecification > m_specification;
			

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
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_CONSTRAINT_HPP */

