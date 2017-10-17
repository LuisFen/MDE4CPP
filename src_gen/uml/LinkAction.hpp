//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LINKACTION_HPP
#define UML_LINKACTION_HPP

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
	class Association;
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
	class LinkEndData;
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
	 LinkAction is an abstract class for all Actions that identify the links to be acted on using LinkEndData.
	<p>From package UML::Actions.</p> */
	class LinkAction:virtual public Action
	{
		public:
 			LinkAction(const LinkAction &) {}
			LinkAction& operator=(LinkAction const&) = delete;

		protected:
			LinkAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LinkAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Returns the Association acted on by this LinkAction.
			result = (endData->asSequence()->first().end.association)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<uml::Association> association()  = 0;
			
			/*!
			 The ends of the endData must not be static.
			endData->forAll(not end.isStatic) */ 
			virtual bool not_static(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The ends of the endData must all be from the same Association and include all and only the memberEnds of that association.
			endData.end = self.association().memberEnd->asBag() */ 
			virtual bool same_association(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The inputValue InputPins is the same as the union of all the InputPins referenced by the endData.
			inputValue->asBag()=endData.allPins() */ 
			virtual bool same_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The LinkEndData identifying the values on the ends of the links acting on by this LinkAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::LinkEndData, uml::Element > > getEndData() const = 0;
			
			/*!
			 InputPins used by the LinkEndData of the LinkAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > getInputValue() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The LinkEndData identifying the values on the ends of the links acting on by this LinkAction.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::LinkEndData, uml::Element > > m_endData;
			/*!
			 InputPins used by the LinkEndData of the LinkAction.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > m_inputValue;
			

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
#endif /* end of include guard: UML_LINKACTION_HPP */

