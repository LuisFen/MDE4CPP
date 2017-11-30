//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TESTIDENTITYACTION_HPP
#define UML_TESTIDENTITYACTION_HPP

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
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Classifier;
}

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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "Action.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A TestIdentityAction is an Action that tests if two values are identical objects.
	<p>From package UML::Actions.</p> */
	class TestIdentityAction:virtual public Action
	{
		public:
 			TestIdentityAction(const TestIdentityAction &) {}
			TestIdentityAction& operator=(TestIdentityAction const&) = delete;

		protected:
			TestIdentityAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TestIdentityAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the InputPins is 1..1.
			first.is(1,1) and second.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The InputPins have no type.
			first.type= null and second.type = null */ 
			virtual bool no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of the result OutputPin is Boolean.
			result.type=Boolean */ 
			virtual bool result_is_boolean(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getFirst() const = 0;
			
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setFirst(std::shared_ptr<uml::InputPin> _first_first) = 0;
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const = 0;
			
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) = 0;
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getSecond() const = 0;
			
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setSecond(std::shared_ptr<uml::InputPin> _second_second) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_first;
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::OutputPin > m_result;
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_second;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_TESTIDENTITYACTION_HPP */

