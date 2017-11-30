//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VERTEX_HPP
#define UML_VERTEX_HPP

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
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Region;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StateMachine;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Transition;
}

// base class includes
#include "NamedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Vertex is an abstraction of a node in a StateMachine graph. It can be the source or destination of any number of Transitions.
	<p>From package UML::StateMachines.</p> */
	class Vertex:virtual public NamedElement
	{
		public:
 			Vertex(const Vertex &) {}
			Vertex& operator=(Vertex const&) = delete;

		protected:
			Vertex(){}


			//Additional constructors for the containments back reference

			Vertex(std::weak_ptr<uml::Region > par_container);

			//Additional constructors for the containments back reference

			Vertex(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Vertex(std::weak_ptr<uml::Element > par_owner);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Vertex() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The operation containingStateMachine() returns the StateMachine in which this Vertex is defined.
			result = (if container <> null
			then
			-- the container is a region
			   container.containingStateMachine()
			else 
			   if (self.oclIsKindOf(Pseudostate)) and ((self.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint) or (self.oclAsType(Pseudostate).kind = PseudostateKind::exitPoint)) then
			      self.oclAsType(Pseudostate).stateMachine
			   else 
			      if (self.oclIsKindOf(ConnectionPointReference)) then
			          self.oclAsType(ConnectionPointReference).state.containingStateMachine() -- no other valid cases possible
			      else 
			          null
			      endif
			   endif
			endif
			)
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<uml::StateMachine> containingStateMachine()  = 0;
			
			/*!
			 Derivation for Vertex::/incoming.
			result = (Transition.allInstances()->select(target=self))
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<Bag<uml::Transition> > getIncomings()  = 0;
			
			/*!
			 Derivation for Vertex::/outgoing
			result = (Transition.allInstances()->select(source=self))
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<Bag<uml::Transition> > getOutgoings()  = 0;
			
			/*!
			 This utility query returns true if the Vertex is contained in the Region r (input argument).
			result = (if (container = r) then
				true
			else
				if (r.state->isEmpty()) then
					false
				else
					container.state.isContainedInRegion(r)
				endif
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual bool isContainedInRegion(std::shared_ptr<uml::Region>  r)  = 0;
			
			/*!
			 This utility operation returns true if the Vertex is contained in the State s (input argument).
			result = (if not s.isComposite() or container->isEmpty() then
				false
			else
				if container.state = s then 
					true
				else
					container.state.isContainedInState(s)
				endif
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual bool isContainedInState(std::shared_ptr<uml::State>  s)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual std::weak_ptr<uml::Region > getContainer() const = 0;
			
			/*!
			 The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual void setContainer(std::shared_ptr<uml::Region> _container_container) = 0;
			/*!
			 Specifies the Transitions entering this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr< Bag<uml::Transition> > getIncoming() const = 0;
			
			/*!
			 Specifies the Transitions departing from this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr< Bag<uml::Transition> > getOutgoing() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p> */
			std::weak_ptr<uml::Region > m_container;
			/*!
			 Specifies the Transitions entering this Vertex.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr< Bag<uml::Transition> > m_incoming;
			/*!
			 Specifies the Transitions departing from this Vertex.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr< Bag<uml::Transition> > m_outgoing;
			

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
#endif /* end of include guard: UML_VERTEX_HPP */

