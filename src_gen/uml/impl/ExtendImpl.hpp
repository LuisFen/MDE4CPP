//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXTENDEXTENDIMPL_HPP
#define UML_EXTENDEXTENDIMPL_HPP

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
#include "../Extend.hpp"

#include "impl/DirectedRelationshipImpl.hpp"
#include "impl/NamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ExtendImpl :virtual public DirectedRelationshipImpl, virtual public NamedElementImpl, virtual public Extend 
	{
		public: 
			ExtendImpl(const ExtendImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExtendImpl& operator=(ExtendImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExtendImpl();

			//Additional constructors for the containments back reference
			ExtendImpl(std::weak_ptr<uml::UseCase > par_extension);


			//Additional constructors for the containments back reference
			ExtendImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExtendImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ExtendImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The ExtensionPoints referenced by the Extend relationship must belong to the UseCase that is being extended.
			extensionLocation->forAll (xp | extendedCase.extensionPoint->includes(xp)) */ 
			virtual bool extension_points(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the condition that must hold when the first ExtensionPoint is reached for the extension to take place. If no constraint is associated with the Extend relationship, the extension is unconditional.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<uml::Constraint > getCondition() const ;
			
			/*!
			 References the condition that must hold when the first ExtensionPoint is reached for the extension to take place. If no constraint is associated with the Extend relationship, the extension is unconditional.
			<p>From package UML::UseCases.</p> */
			virtual void setCondition(std::shared_ptr<uml::Constraint> _condition_condition) ;
			/*!
			 The UseCase that is being extended.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<uml::UseCase > getExtendedCase() const ;
			
			/*!
			 The UseCase that is being extended.
			<p>From package UML::UseCases.</p> */
			virtual void setExtendedCase(std::shared_ptr<uml::UseCase> _extendedCase_extendedCase) ;
			/*!
			 The UseCase that represents the extension and owns the Extend relationship.
			<p>From package UML::UseCases.</p> */
			virtual std::weak_ptr<uml::UseCase > getExtension() const ;
			
			/*!
			 The UseCase that represents the extension and owns the Extend relationship.
			<p>From package UML::UseCases.</p> */
			virtual void setExtension(std::shared_ptr<uml::UseCase> _extension_extension) ;
			/*!
			 An ordered list of ExtensionPoints belonging to the extended UseCase, specifying where the respective behavioral fragments of the extending UseCase are to be inserted. The first fragment in the extending UseCase is associated with the first extension point in the list, the second fragment with the second point, and so on. Note that, in most practical cases, the extending UseCase has just a single behavior fragment, so that the list of ExtensionPoints is trivial.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr< Bag<uml::ExtensionPoint> > getExtensionLocation() const ;
			
							
			
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
#endif /* end of include guard: UML_EXTENDEXTENDIMPL_HPP */

