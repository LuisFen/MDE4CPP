//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STATEMACHINESTATEMACHINEIMPL_HPP
#define UML_STATEMACHINESTATEMACHINEIMPL_HPP

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
#include "../StateMachine.hpp"

#include "impl/BehaviorImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class StateMachineImpl :virtual public BehaviorImpl, virtual public StateMachine 
	{
		public: 
			StateMachineImpl(const StateMachineImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StateMachineImpl& operator=(StateMachineImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			StateMachineImpl();

			//Additional constructors for the containments back reference
			StateMachineImpl(std::weak_ptr<uml::BehavioredClassifier > par_behavioredClassifier);


			//Additional constructors for the containments back reference
			StateMachineImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			StateMachineImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			StateMachineImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			StateMachineImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~StateMachineImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The operation LCA(s1,s2) returns the Region that is the least common ancestor of Vertices s1 and s2, based on the StateMachine containment hierarchy.
			result = (if ancestor(s1, s2) then 
			    s2.container
			else
				if ancestor(s2, s1) then
				    s1.container 
				else 
				    LCA(s1.container.state, s2.container.state)
				endif
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<uml::Region> LCA(std::shared_ptr<uml::Vertex>  s1,std::shared_ptr<uml::Vertex>  s2)  ;
			
			/*!
			 This utility funciton is like the LCA, except that it returns the nearest composite State that contains both input Vertices.
			result = (if v2.oclIsTypeOf(State) and ancestor(v1, v2) then
				v2.oclAsType(State)
			else if v1.oclIsTypeOf(State) and ancestor(v2, v1) then
				v1.oclAsType(State)
			else if (v1.container.state->isEmpty() or v2.container.state->isEmpty()) then 
				null.oclAsType(State)
			else LCAState(v1.container.state, v2.container.state)
			endif endif endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<uml::State> LCAState(std::shared_ptr<uml::Vertex>  v1,std::shared_ptr<uml::Vertex>  v2)  ;
			
			/*!
			 The query ancestor(s1, s2) checks whether Vertex s2 is an ancestor of Vertex s1.
			result = (if (s2 = s1) then 
				true 
			else 
				if s1.container.stateMachine->notEmpty() then 
				    true
				else 
				    if s2.container.stateMachine->notEmpty() then 
				        false
				    else
				        ancestor(s1, s2.container.state)
				     endif
				 endif
			endif  )
			<p>From package UML::StateMachines.</p> */ 
			virtual bool ancestor(std::shared_ptr<uml::Vertex>  s1,std::shared_ptr<uml::Vertex>  s2)  ;
			
			/*!
			 The Classifier context of a StateMachine cannot be an Interface.
			_'context' <> null implies not _'context'.oclIsKindOf(Interface) */ 
			virtual bool classifier_context(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The connection points of a StateMachine are Pseudostates of kind entry point or exit point.
			connectionPoint->forAll (kind = PseudostateKind::entryPoint or kind = PseudostateKind::exitPoint) */ 
			virtual bool connection_points(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The context Classifier of the method StateMachine of a BehavioralFeature must be the Classifier that owns the BehavioralFeature.
			specification <> null implies ( _'context' <> null and specification.featuringClassifier->exists(c | c = _'context')) */ 
			virtual bool context_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A StateMachine as the method for a BehavioralFeature cannot have entry/exit connection points.
			specification <> null implies connectionPoint->isEmpty() */ 
			virtual bool method(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The connection points defined for this StateMachine. They represent the interface of the StateMachine when used as part of submachine State
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<Subset<uml::Pseudostate, uml::NamedElement > > getConnectionPoint() const ;
			
			/*!
			 The StateMachines of which this is an extension.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr< Bag<uml::StateMachine> > getExtendedStateMachine() const ;
			
			/*!
			 The Regions owned directly by the StateMachine.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<Subset<uml::Region, uml::NamedElement > > getRegion() const ;
			
			/*!
			 References the submachine(s) in case of a submachine State. Multiple machines are referenced in case of a concurrent State.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr< Bag<uml::State> > getSubmachineState() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier> > getRedefinitionContext() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > > getRole() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_STATEMACHINESTATEMACHINEIMPL_HPP */

