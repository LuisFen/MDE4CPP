//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MANIFESTATIONMANIFESTATIONIMPL_HPP
#define UML_MANIFESTATIONMANIFESTATIONIMPL_HPP

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
#include "../Manifestation.hpp"

#include "impl/AbstractionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ManifestationImpl :virtual public AbstractionImpl, virtual public Manifestation 
	{
		public: 
			ManifestationImpl(const ManifestationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ManifestationImpl& operator=(ManifestationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ManifestationImpl();

			//Additional constructors for the containments back reference
			ManifestationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ManifestationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ManifestationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			ManifestationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~ManifestationImpl();
			
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
			 The model element that is utilized in the manifestation in an Artifact.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<uml::PackageableElement > getUtilizedElement() const ;
			
			/*!
			 The model element that is utilized in the manifestation in an Artifact.
			<p>From package UML::Deployments.</p> */
			virtual void setUtilizedElement(std::shared_ptr<uml::PackageableElement> _utilizedElement_utilizedElement) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_MANIFESTATIONMANIFESTATIONIMPL_HPP */

