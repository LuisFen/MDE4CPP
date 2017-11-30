//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEEXPRESSION_HPP
#define UML_TIMEEXPRESSION_HPP

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
	class Observation;
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
#include "ValueSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A TimeExpression is a ValueSpecification that represents a time value.
	<p>From package UML::Values.</p> */
	class TimeExpression:virtual public ValueSpecification
	{
		public:
 			TimeExpression(const TimeExpression &) {}
			TimeExpression& operator=(TimeExpression const&) = delete;

		protected:
			TimeExpression(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TimeExpression() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 If a TimeExpression has no expr, then it must have a single observation that is a TimeObservation.
			expr = null implies (observation->size() = 1 and observation->forAll(oclIsKindOf(TimeObservation))) */ 
			virtual bool no_expr_requires_observation(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A ValueSpecification that evaluates to the value of the TimeExpression.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getExpr() const = 0;
			
			/*!
			 A ValueSpecification that evaluates to the value of the TimeExpression.
			<p>From package UML::Values.</p> */
			virtual void setExpr(std::shared_ptr<uml::ValueSpecification> _expr_expr) = 0;
			/*!
			 Refers to the Observations that are involved in the computation of the TimeExpression value.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr< Bag<uml::Observation> > getObservation() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A ValueSpecification that evaluates to the value of the TimeExpression.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::ValueSpecification > m_expr;
			/*!
			 Refers to the Observations that are involved in the computation of the TimeExpression value.
			<p>From package UML::Values.</p> */
			std::shared_ptr< Bag<uml::Observation> > m_observation;
			

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
#endif /* end of include guard: UML_TIMEEXPRESSION_HPP */

