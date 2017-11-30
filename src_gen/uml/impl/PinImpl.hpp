//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PINPINIMPL_HPP
#define UML_PINPINIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../Pin.hpp"

#include "impl/MultiplicityElementImpl.hpp"
#include "impl/ObjectNodeImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class PinImpl :virtual public MultiplicityElementImpl, virtual public ObjectNodeImpl, virtual public Pin 
	{
		public: 
			PinImpl(const PinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PinImpl& operator=(PinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PinImpl();

			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			PinImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~PinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A control Pin has a control type.
			isControl implies isControlType */ 
			virtual bool control_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Pin multiplicity is not unique.
			not isUnique */ 
			virtual bool not_unique(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the Pin provides data to the Action or just controls how the Action executes.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsControl() const ;
			
			/*!
			 Indicates whether the Pin provides data to the Action or just controls how the Action executes.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsControl (bool _isControl); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_PINPINIMPL_HPP */

