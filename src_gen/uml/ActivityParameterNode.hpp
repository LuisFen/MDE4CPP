//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIVITYPARAMETERNODE_HPP
#define UML_ACTIVITYPARAMETERNODE_HPP

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
	class Behavior;
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
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class ObjectNode;
}

namespace uml 
{
	class Parameter;
}

namespace uml 
{
	class RedefinableElement;
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
	class StructuredActivityNode;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "ObjectNode.hpp"

// enum includes
#include "ObjectNodeOrderingKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An ActivityParameterNode is an ObjectNode for accepting values from the input Parameters or providing values to the output Parameters of an Activity.
	<p>From package UML::Activities.</p> */
	class ActivityParameterNode:virtual public ObjectNode
	{
		public:
 			ActivityParameterNode(const ActivityParameterNode &) {}
			ActivityParameterNode& operator=(ActivityParameterNode const&) = delete;

		protected:
			ActivityParameterNode(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ActivityParameterNode() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The parameter of an ActivityParameterNode must be from the containing Activity.
			activity.ownedParameter->includes(parameter) */ 
			virtual bool has_parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An ActivityParameterNode may have all incoming ActivityEdges or all outgoing ActivityEdges, but it must not have both incoming and outgoing ActivityEdges.
			incoming->isEmpty() or outgoing->isEmpty() */ 
			virtual bool no_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An ActivityParameterNode with no incoming ActivityEdges and one or more outgoing ActivityEdges must have a parameter with direction in or inout.
			(outgoing->notEmpty() and incoming->isEmpty()) implies 
				(parameter.direction = ParameterDirectionKind::_'in' or 
				 parameter.direction = ParameterDirectionKind::inout) */ 
			virtual bool no_incoming_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An ActivityParameterNode with no outgoing ActivityEdges and one or more incoming ActivityEdges must have a parameter with direction out, inout, or return.
			(incoming->notEmpty() and outgoing->isEmpty()) implies 
				(parameter.direction = ParameterDirectionKind::out or 
				 parameter.direction = ParameterDirectionKind::inout or 
				 parameter.direction = ParameterDirectionKind::return) */ 
			virtual bool no_outgoing_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of an ActivityParameterNode is the same as the type of its parameter.
			type = parameter.type */ 
			virtual bool same_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Parameter for which the ActivityParameterNode will be accepting or providing values.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Parameter > getParameter() const = 0;
			
			/*!
			 The Parameter for which the ActivityParameterNode will be accepting or providing values.
			<p>From package UML::Activities.</p> */
			virtual void setParameter(std::shared_ptr<uml::Parameter> _parameter_parameter) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Parameter for which the ActivityParameterNode will be accepting or providing values.
			<p>From package UML::Activities.</p> */
			std::shared_ptr<uml::Parameter > m_parameter;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0;/*!
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
#endif /* end of include guard: UML_ACTIVITYPARAMETERNODE_HPP */

