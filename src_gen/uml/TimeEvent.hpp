//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEEVENT_HPP
#define UML_TIMEEVENT_HPP

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
	class Event;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TimeExpression;
}

// base class includes
#include "Event.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A TimeEvent is an Event that occurs at a specific point in time.
	<p>From package UML::CommonBehavior.</p> */
	class TimeEvent:virtual public Event
	{
		public:
 			TimeEvent(const TimeEvent &) {}
			TimeEvent& operator=(TimeEvent const&) = delete;

		protected:
			TimeEvent(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TimeEvent() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The ValueSpecification when must return a non-negative Integer.
			when.integerValue() >= 0 */ 
			virtual bool when_non_negative(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p> */ 
			virtual bool getIsRelative() const = 0;
			
			/*!
			 Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p> */ 
			virtual void setIsRelative (bool _isRelative)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::TimeExpression > getWhen() const = 0;
			
			/*!
			 Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setWhen(std::shared_ptr<uml::TimeExpression> _when_when) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p> */ 
			bool m_isRelative =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p> */
			std::shared_ptr<uml::TimeExpression > m_when;
			

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
#endif /* end of include guard: UML_TIMEEVENT_HPP */

