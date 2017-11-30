//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEABLEELEMENTTEMPLATEABLEELEMENTIMPL_HPP
#define UML_TEMPLATEABLEELEMENTTEMPLATEABLEELEMENTIMPL_HPP

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
#include "../TemplateableElement.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class TemplateableElementImpl :virtual public ElementImpl, virtual public TemplateableElement 
	{
		public: 
			TemplateableElementImpl(const TemplateableElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TemplateableElementImpl& operator=(TemplateableElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TemplateableElementImpl();

			//Additional constructors for the containments back reference
			TemplateableElementImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~TemplateableElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The query isTemplate() returns whether this TemplateableElement is actually a template.
			result = (ownedTemplateSignature <> null)
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool isTemplate()  ;
			
			/*!
			 The query parameterableElements() returns the set of ParameterableElements that may be used as the parameteredElements for a TemplateParameter of this TemplateableElement. By default, this set includes all the ownedElements. Subclasses may override this operation if they choose to restrict the set of ParameterableElements.
			result = (self.allOwnedElements()->select(oclIsKindOf(ParameterableElement)).oclAsType(ParameterableElement)->asSet())
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::shared_ptr<Bag<uml::ParameterableElement> > parameterableElements()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a TemplateableElement has a TemplateSignature, then it is a template.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateSignature > getOwnedTemplateSignature() const ;
			
			/*!
			 The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a TemplateableElement has a TemplateSignature, then it is a template.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedTemplateSignature(std::shared_ptr<uml::TemplateSignature> _ownedTemplateSignature_ownedTemplateSignature) ;
			/*!
			 The optional TemplateBindings from this TemplateableElement to one or more templates.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Subset<uml::TemplateBinding, uml::Element > > getTemplateBinding() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_TEMPLATEABLEELEMENTTEMPLATEABLEELEMENTIMPL_HPP */

