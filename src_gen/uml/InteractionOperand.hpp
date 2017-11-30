//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONOPERAND_HPP
#define UML_INTERACTIONOPERAND_HPP

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
	class Constraint;
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
	class ElementImport;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionConstraint;
}

namespace uml 
{
	class InteractionFragment;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "InteractionFragment.hpp"

#include "Namespace.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InteractionOperand is contained in a CombinedFragment. An InteractionOperand represents one operand of the expression given by the enclosing CombinedFragment.
	<p>From package UML::Interactions.</p> */
	class InteractionOperand:virtual public InteractionFragment,virtual public Namespace
	{
		public:
 			InteractionOperand(const InteractionOperand &) {}
			InteractionOperand& operator=(InteractionOperand const&) = delete;

		protected:
			InteractionOperand(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~InteractionOperand() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The guard must contain only references to values local to the Lifeline on which it resides, or values global to the whole Interaction. */ 
			virtual bool guard_contain_references(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The guard must be placed directly prior to (above) the OccurrenceSpecification that will become the first OccurrenceSpecification within this InteractionOperand. */ 
			virtual bool guard_directly_prior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The fragments of the operand.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::InteractionFragment, uml::NamedElement > > getFragment() const = 0;
			
			/*!
			 Constraint of the operand.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::InteractionConstraint > getGuard() const = 0;
			
			/*!
			 Constraint of the operand.
			<p>From package UML::Interactions.</p> */
			virtual void setGuard(std::shared_ptr<uml::InteractionConstraint> _guard_guard) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The fragments of the operand.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::InteractionFragment, uml::NamedElement > > m_fragment;
			/*!
			 Constraint of the operand.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::InteractionConstraint > m_guard;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_INTERACTIONOPERAND_HPP */

