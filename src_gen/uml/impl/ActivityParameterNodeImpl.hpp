//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIVITYPARAMETERNODEACTIVITYPARAMETERNODEIMPL_HPP
#define UML_ACTIVITYPARAMETERNODEACTIVITYPARAMETERNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ActivityParameterNode.hpp"

#include "impl/ObjectNodeImpl.hpp"



//*********************************
namespace uml 
{
	class ActivityParameterNodeImpl :virtual public ObjectNodeImpl, virtual public ActivityParameterNode 
	{
		public: 
			ActivityParameterNodeImpl(const ActivityParameterNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActivityParameterNodeImpl& operator=(ActivityParameterNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActivityParameterNodeImpl();

		public:
			//destructor
			virtual ~ActivityParameterNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An ActivityParameterNode with no outgoing ActivityEdges and one or more incoming ActivityEdges must have a parameter with direction out, inout, or return.
			(incoming->notEmpty() and outgoing->isEmpty()) implies 
				(parameter.direction = ParameterDirectionKind::out or 
				 parameter.direction = ParameterDirectionKind::inout or 
				 parameter.direction = ParameterDirectionKind::return) */ 
			virtual bool no_outgoing_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The parameter of an ActivityParameterNode must be from the containing Activity.
			activity.ownedParameter->includes(parameter) */ 
			virtual bool has_parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The type of an ActivityParameterNode is the same as the type of its parameter.
			type = parameter.type */ 
			virtual bool same_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 An ActivityParameterNode with no incoming ActivityEdges and one or more outgoing ActivityEdges must have a parameter with direction in or inout.
			(outgoing->notEmpty() and incoming->isEmpty()) implies 
				(parameter.direction = ParameterDirectionKind::_'in' or 
				 parameter.direction = ParameterDirectionKind::inout) */ 
			virtual bool no_incoming_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 An ActivityParameterNode may have all incoming ActivityEdges or all outgoing ActivityEdges, but it must not have both incoming and outgoing ActivityEdges.
			incoming->isEmpty() or outgoing->isEmpty() */ 
			virtual bool no_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Parameter for which the ActivityParameterNode will be accepting or providing values.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Parameter> getParameter() const ;
			
			/*!
			 The Parameter for which the ActivityParameterNode will be accepting or providing values.
			<p>From package UML::Activities.</p> */
			virtual void setParameter(std::shared_ptr<uml::Parameter> _parameter) ;
							
			
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
#endif /* end of include guard: UML_ACTIVITYPARAMETERNODEACTIVITYPARAMETERNODEIMPL_HPP */
