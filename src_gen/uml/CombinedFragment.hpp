//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMBINEDFRAGMENT_HPP
#define UML_COMBINEDFRAGMENT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
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
	class Gate;
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
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "InteractionFragment.hpp"

// enum includes
#include "InteractionOperatorKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A CombinedFragment defines an expression of InteractionFragments. A CombinedFragment is defined by an interaction operator and corresponding InteractionOperands. Through the use of CombinedFragments the user will be able to describe a number of traces in a compact and concise manner.
	<p>From package UML::Interactions.</p> */
	class CombinedFragment:virtual public InteractionFragment	{
		public:
 			CombinedFragment(const CombinedFragment &) {}
			CombinedFragment& operator=(CombinedFragment const&) = delete;
	
		protected:
			CombinedFragment(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~CombinedFragment() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 If the interactionOperator is break, the corresponding InteractionOperand must cover all Lifelines covered by the enclosing InteractionFragment.
			interactionOperator=InteractionOperatorKind::break  implies   
			enclosingInteraction.oclAsType(InteractionFragment)->asSet()->union(
			   enclosingOperand.oclAsType(InteractionFragment)->asSet()).covered->asSet() = self.covered->asSet() */ 
			virtual bool break_(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The interaction operators 'consider' and 'ignore' can only be used for the ConsiderIgnoreFragment subtype of CombinedFragment
			((interactionOperator = InteractionOperatorKind::consider) or (interactionOperator =  InteractionOperatorKind::ignore)) implies oclIsKindOf(ConsiderIgnoreFragment) */ 
			virtual bool consider_and_ignore(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If the interactionOperator is opt, loop, break, assert or neg, there must be exactly one operand.
			(interactionOperator =  InteractionOperatorKind::opt or interactionOperator = InteractionOperatorKind::loop or
			interactionOperator = InteractionOperatorKind::break or interactionOperator = InteractionOperatorKind::assert or
			interactionOperator = InteractionOperatorKind::neg)
			implies operand->size()=1 */ 
			virtual bool opt_loop_break_neg(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies the operation which defines the semantics of this combination of InteractionFragments.
			<p>From package UML::Interactions.</p> */ 
			virtual InteractionOperatorKind getInteractionOperator() const = 0;
			
			/*!
			 Specifies the operation which defines the semantics of this combination of InteractionFragments.
			<p>From package UML::Interactions.</p> */ 
			virtual void setInteractionOperator (InteractionOperatorKind _interactionOperator)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the gates that form the interface between this CombinedFragment and its surroundings
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Gate>>> getCfragmentGate() const = 0;
			
			/*!
			 The set of operands of the combined fragment.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InteractionOperand>>> getOperand() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies the operation which defines the semantics of this combination of InteractionFragments.
			<p>From package UML::Interactions.</p> */ 
			InteractionOperatorKind m_interactionOperator = InteractionOperatorKind::SEQ ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the gates that form the interface between this CombinedFragment and its surroundings
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Gate>>> m_cfragmentGate;
			/*!
			 The set of operands of the combined fragment.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::InteractionOperand>>> m_operand;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_COMBINEDFRAGMENT_HPP */
