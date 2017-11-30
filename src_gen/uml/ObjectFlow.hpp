//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTFLOW_HPP
#define UML_OBJECTFLOW_HPP

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

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "ActivityEdge.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An ObjectFlow is an ActivityEdge that is traversed by object tokens that may hold values. Object flows also support multicast/receive, token selection from object nodes, and transformation of tokens.
	<p>From package UML::Activities.</p> */
	class ObjectFlow:virtual public ActivityEdge
	{
		public:
 			ObjectFlow(const ObjectFlow &) {}
			ObjectFlow& operator=(ObjectFlow const&) = delete;

		protected:
			ObjectFlow(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ObjectFlow() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have compatible types. In particular, the downstream ObjectNode type must be the same or a supertype of the upstream ObjectNode type. */ 
			virtual bool compatible_types(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A selection Behavior has one input Parameter and one output Parameter. The input Parameter must have the same as or a supertype of the type of the source ObjectNode, be non-unique and have multiplicity 0..*. The output Parameter must be the same or a subtype of the type of source ObjectNode. The Behavior cannot have side effects.
			selection<>null implies
				selection.inputParameters()->size()=1 and
				selection.inputParameters()->forAll(not isUnique and is(0,*)) and
				selection.outputParameters()->size()=1 */ 
			virtual bool input_and_output_parameter(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 isMulticast and isMultireceive cannot both be true.
			not (isMulticast and isMultireceive) */ 
			virtual bool is_multicast_or_is_multireceive(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 ObjectFlows may not have ExecutableNodes at either end.
			not (source.oclIsKindOf(ExecutableNode) or target.oclIsKindOf(ExecutableNode)) */ 
			virtual bool no_executable_nodes(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have the same upperBounds. */ 
			virtual bool same_upper_bounds(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An ObjectFlow may have a selection Behavior only if it has an ObjectNode as its source.
			selection<>null implies source.oclIsKindOf(ObjectNode) */ 
			virtual bool selection_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An ObjectFlow with a constant weight may not target an ObjectNode, with optionally intervening ControlNodes, that has an upper bound less than the weight. */ 
			virtual bool target(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A transformation Behavior has one input Parameter and one output Parameter. The input Parameter must be the same as or a supertype of the type of object token coming from the source end. The output Parameter must be the same or a subtype of the type of object token expected downstream. The Behavior cannot have side effects.
			transformation<>null implies
				transformation.inputParameters()->size()=1 and
				transformation.outputParameters()->size()=1 */ 
			virtual bool transformation_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the objects in the ObjectFlow are passed by multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsMulticast() const = 0;
			
			/*!
			 Indicates whether the objects in the ObjectFlow are passed by multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsMulticast (bool _isMulticast)= 0; 
			
			/*!
			 Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsMultireceive() const = 0;
			
			/*!
			 Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsMultireceive (bool _isMultireceive)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Behavior used to select tokens from a source ObjectNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Behavior > getSelection() const = 0;
			
			/*!
			 A Behavior used to select tokens from a source ObjectNode.
			<p>From package UML::Activities.</p> */
			virtual void setSelection(std::shared_ptr<uml::Behavior> _selection_selection) = 0;
			/*!
			 A Behavior used to change or replace object tokens flowing along the ObjectFlow.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Behavior > getTransformation() const = 0;
			
			/*!
			 A Behavior used to change or replace object tokens flowing along the ObjectFlow.
			<p>From package UML::Activities.</p> */
			virtual void setTransformation(std::shared_ptr<uml::Behavior> _transformation_transformation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Indicates whether the objects in the ObjectFlow are passed by multicasting.
			<p>From package UML::Activities.</p> */ 
			bool m_isMulticast =  false;
			/*!
			 Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
			<p>From package UML::Activities.</p> */ 
			bool m_isMultireceive =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A Behavior used to select tokens from a source ObjectNode.
			<p>From package UML::Activities.</p> */
			std::shared_ptr<uml::Behavior > m_selection;
			/*!
			 A Behavior used to change or replace object tokens flowing along the ObjectFlow.
			<p>From package UML::Activities.</p> */
			std::shared_ptr<uml::Behavior > m_transformation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityEdge.
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
#endif /* end of include guard: UML_OBJECTFLOW_HPP */

