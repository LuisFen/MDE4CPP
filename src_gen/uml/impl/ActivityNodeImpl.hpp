//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIVITYNODEACTIVITYNODEIMPL_HPP
#define UML_ACTIVITYNODEACTIVITYNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ActivityNode.hpp"

#include "impl/ActivityContentImpl.hpp"
#include "impl/RedefinableElementImpl.hpp"



//*********************************
namespace uml 
{
	class ActivityNodeImpl :virtual public ActivityContentImpl, virtual public RedefinableElementImpl, virtual public ActivityNode 
	{
		public: 
			ActivityNodeImpl(const ActivityNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActivityNodeImpl& operator=(ActivityNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActivityNodeImpl();

		public:
			//destructor
			virtual ~ActivityNodeImpl();
			
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
			 The Activity containing the ActivityNode, if it is directly owned by an Activity.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Activity> getActivity() const ;
			
			/*!
			 The Activity containing the ActivityNode, if it is directly owned by an Activity.
			<p>From package UML::Activities.</p> */
			virtual void setActivity(std::shared_ptr<uml::Activity> _activity) ;
			
			/*!
			 InterruptibleActivityRegions containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> getInInterruptibleRegion() const ;
			
			/*!
			 The StructuredActivityNode containing the ActvityNode, if it is directly owned by a StructuredActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::StructuredActivityNode> getInStructuredNode() const ;
			
			/*!
			 The StructuredActivityNode containing the ActvityNode, if it is directly owned by a StructuredActivityNode.
			<p>From package UML::Activities.</p> */
			virtual void setInStructuredNode(std::shared_ptr<uml::StructuredActivityNode> _inStructuredNode) ;
			/*!
			 ActivityEdges that have the ActivityNode as their target.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> getIncoming() const ;
			
			/*!
			 ActivityEdges that have the ActivityNode as their source.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> getOutgoing() const ;
			
			/*!
			 ActivityNodes from a generalization of the Activity containining this ActivityNode that are redefined by this ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> getRedefinedNode() const ;
			
			/*!
			 ActivityPartitions containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> getInPartition() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ACTIVITYNODEACTIVITYNODEIMPL_HPP */
