//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLEVENT_HPP
#define UML_CALLEVENT_HPP

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
	class MessageEvent;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "MessageEvent.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A CallEvent models the receipt by an object of a message invoking a call of an Operation.
	<p>From package UML::CommonBehavior.</p> */
	class CallEvent:virtual public MessageEvent	{
		public:
 			CallEvent(const CallEvent &) {}
			CallEvent& operator=(CallEvent const&) = delete;
	
		protected:
			CallEvent(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~CallEvent() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::Operation> getOperation() const = 0;
			
			/*!
			 Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setOperation(std::shared_ptr<uml::Operation> _operation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p> */
			std::shared_ptr<uml::Operation> m_operation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_CALLEVENT_HPP */
