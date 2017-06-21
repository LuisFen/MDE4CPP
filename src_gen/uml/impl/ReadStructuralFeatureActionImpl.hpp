//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READSTRUCTURALFEATUREACTIONREADSTRUCTURALFEATUREACTIONIMPL_HPP
#define UML_READSTRUCTURALFEATUREACTIONREADSTRUCTURALFEATUREACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ReadStructuralFeatureAction.hpp"

#include "impl/StructuralFeatureActionImpl.hpp"



//*********************************
namespace uml 
{
	class ReadStructuralFeatureActionImpl :virtual public StructuralFeatureActionImpl, virtual public ReadStructuralFeatureAction 
	{
		public: 
			ReadStructuralFeatureActionImpl(const ReadStructuralFeatureActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReadStructuralFeatureActionImpl& operator=(ReadStructuralFeatureActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReadStructuralFeatureActionImpl();

		public:
			//destructor
			virtual ~ReadStructuralFeatureActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The type and ordering of the result OutputPin are the same as the type and ordering of the StructuralFeature.
			result.type =structuralFeature.type and 
			result.isOrdered = structuralFeature.isOrdered */ 
			virtual bool type_and_ordering(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPin on which the result values are placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin> getResult() const ;
			
			/*!
			 The OutputPin on which the result values are placed.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> getOutput() const ;/*!
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
#endif /* end of include guard: UML_READSTRUCTURALFEATUREACTIONREADSTRUCTURALFEATUREACTIONIMPL_HPP */
