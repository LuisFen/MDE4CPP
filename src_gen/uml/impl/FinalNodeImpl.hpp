//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FINALNODEFINALNODEIMPL_HPP
#define UML_FINALNODEFINALNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../FinalNode.hpp"

#include "impl/ControlNodeImpl.hpp"



//*********************************
namespace uml 
{
	class FinalNodeImpl :virtual public ControlNodeImpl, virtual public FinalNode 
	{
		public: 
			FinalNodeImpl(const FinalNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			FinalNodeImpl& operator=(FinalNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			FinalNodeImpl();

		public:
			//destructor
			virtual ~FinalNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A FinalNode has no outgoing ActivityEdges.
			outgoing->isEmpty() */ 
			virtual bool no_outgoing_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
#endif /* end of include guard: UML_FINALNODEFINALNODEIMPL_HPP */
