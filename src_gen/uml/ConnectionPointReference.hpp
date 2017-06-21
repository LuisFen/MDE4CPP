//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTIONPOINTREFERENCE_HPP
#define UML_CONNECTIONPOINTREFERENCE_HPP

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
	class Namespace;
}

namespace uml 
{
	class Pseudostate;
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
	class StringExpression;
}

namespace uml 
{
	class Transition;
}

namespace uml 
{
	class Vertex;
}

// base class includes
#include "Vertex.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ConnectionPointReference represents a usage (as part of a submachine State) of an entry/exit point Pseudostate defined in the StateMachine referenced by the submachine State.
	<p>From package UML::StateMachines.</p> */
	class ConnectionPointReference:virtual public Vertex	{
		public:
 			ConnectionPointReference(const ConnectionPointReference &) {}
			ConnectionPointReference& operator=(ConnectionPointReference const&) = delete;
	
		protected:
			ConnectionPointReference(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ConnectionPointReference() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The exit Pseudostates must be Pseudostates with kind exitPoint.
			exit->forAll(kind = PseudostateKind::exitPoint) */ 
			virtual bool exit_pseudostates(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The entry Pseudostates must be Pseudostates with kind entryPoint.
			entry->forAll(kind = PseudostateKind::entryPoint) */ 
			virtual bool entry_pseudostates(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The entryPoint Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Pseudostate>>> getEntry() const = 0;
			
			/*!
			 The exitPoints kind Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Pseudostate>>> getExit() const = 0;
			
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<uml::State> getState() const = 0;
			
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			virtual void setState(std::shared_ptr<uml::State> _state) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The entryPoint Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Pseudostate>>> m_entry;
			/*!
			 The exitPoints kind Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Pseudostate>>> m_exit;
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr<uml::State> m_state;
			

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
#endif /* end of include guard: UML_CONNECTIONPOINTREFERENCE_HPP */
