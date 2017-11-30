//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DECISIONNODEDECISIONNODEIMPL_HPP
#define UML_DECISIONNODEDECISIONNODEIMPL_HPP

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
#include "../DecisionNode.hpp"

#include "impl/ControlNodeImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class DecisionNodeImpl :virtual public ControlNodeImpl, virtual public DecisionNode 
	{
		public: 
			DecisionNodeImpl(const DecisionNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DecisionNodeImpl& operator=(DecisionNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DecisionNodeImpl();

			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~DecisionNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The decisionInputFlow of a DecisionNode must be an incoming ActivityEdge of the DecisionNode.
			incoming->includes(decisionInputFlow) */ 
			virtual bool decision_input_flow_incoming(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The ActivityEdges incoming to and outgoing from a DecisionNode, other than the decisionInputFlow (if any), must be either all ObjectFlows or all ControlFlows.
			let allEdges: Set(ActivityEdge) = incoming->union(outgoing) in
			let allRelevantEdges: Set(ActivityEdge) = if decisionInputFlow->notEmpty() then allEdges->excluding(decisionInputFlow) else allEdges endif in
			allRelevantEdges->forAll(oclIsKindOf(ControlFlow)) or allRelevantEdges->forAll(oclIsKindOf(ObjectFlow))
			 */ 
			virtual bool edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the DecisionNode has a decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->exists(oclIsKindOf(ControlFlow))) implies
				decisionInput.inputParameters()->size()=1 */ 
			virtual bool incoming_control_one_input_parameter(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the DecisionNode has no decisionInputFlow and an incoming ObjectFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the incoming ObjectFlow.
			(decisionInput<>null and decisionInputFlow=null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=1 */ 
			virtual bool incoming_object_one_input_parameter(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A DecisionNode has one or two incoming ActivityEdges and at least one outgoing ActivityEdge.
			(incoming->size() = 1 or incoming->size() = 2) and outgoing->size() > 0 */ 
			virtual bool incoming_outgoing_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A decisionInput Behavior has no out parameters, no inout parameters, and one return parameter.
			decisionInput<>null implies 
			  (decisionInput.ownedParameter->forAll(par | 
			     par.direction <> ParameterDirectionKind::out and 
			     par.direction <> ParameterDirectionKind::inout ) and
			   decisionInput.ownedParameter->one(par | 
			     par.direction <> ParameterDirectionKind::return)) */ 
			virtual bool parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the DecisionNode has a decisionInputFlow and an second incoming ObjectFlow, then any decisionInput has two in Parameters, the first of which has a type that is the same as or a supertype of the type of object tokens offered on the non-decisionInputFlow and the second of which has a type that is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=2 */ 
			virtual bool two_input_parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the DecisionNode has no decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has no in parameters.
			(decisionInput<>null and decisionInputFlow=null and incoming->exists(oclIsKindOf(ControlFlow))) implies
			   decisionInput.inputParameters()->isEmpty() */ 
			virtual bool zero_input_parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Behavior > getDecisionInput() const ;
			
			/*!
			 A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p> */
			virtual void setDecisionInput(std::shared_ptr<uml::Behavior> _decisionInput_decisionInput) ;
			/*!
			 An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::ObjectFlow > getDecisionInputFlow() const ;
			
			/*!
			 An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p> */
			virtual void setDecisionInputFlow(std::shared_ptr<uml::ObjectFlow> _decisionInputFlow_decisionInputFlow) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_DECISIONNODEDECISIONNODEIMPL_HPP */

