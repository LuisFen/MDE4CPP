//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLAUSECLAUSEIMPL_HPP
#define UML_CLAUSECLAUSEIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../Clause.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ClauseImpl :virtual public ElementImpl, virtual public Clause 
	{
		public: 
			ClauseImpl(const ClauseImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClauseImpl& operator=(ClauseImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ClauseImpl();

			//Additional constructors for the containments back reference
			ClauseImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ClauseImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The bodyOutput Pins are OutputPins on Actions in the body of the Clause.
			_'body'.oclAsType(Action).allActions().output->includesAll(bodyOutput) */ 
			virtual bool body_output_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The decider Pin must be on an Action in the test section of the Clause and must be of type Boolean with multiplicity 1..1.
			test.oclAsType(Action).allActions().output->includes(decider) and
			decider.type = Boolean and
			decider.is(1,1) */ 
			virtual bool decider_output(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The test and body parts of a ConditionalNode must be disjoint with each other.
			test->intersection(_'body')->isEmpty() */ 
			virtual bool test_and_body(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of ExecutableNodes that are executed if the test evaluates to true and the Clause is chosen over other Clauses within the ConditionalNode that also have tests that evaluate to true.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::ExecutableNode> > getBody() const ;
			
			/*!
			 The OutputPins on Actions within the body section whose values are moved to the result OutputPins of the containing ConditionalNode after execution of the body.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::OutputPin> > getBodyOutput() const ;
			
			/*!
			 An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getDecider() const ;
			
			/*!
			 An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
			<p>From package UML::Actions.</p> */
			virtual void setDecider(std::shared_ptr<uml::OutputPin> _decider_decider) ;
			/*!
			 A set of Clauses whose tests must all evaluate to false before this Clause can evaluate its test.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::Clause> > getPredecessorClause() const ;
			
			/*!
			 A set of Clauses that may not evaluate their tests unless the test for this Clause evaluates to false.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::Clause> > getSuccessorClause() const ;
			
			/*!
			 The set of ExecutableNodes that are executed in order to provide a test result for the Clause.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::ExecutableNode> > getTest() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CLAUSECLAUSEIMPL_HPP */

