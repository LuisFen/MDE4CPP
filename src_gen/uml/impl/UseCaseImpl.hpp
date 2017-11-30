//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_USECASEUSECASEIMPL_HPP
#define UML_USECASEUSECASEIMPL_HPP

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
#include "../UseCase.hpp"

#include "impl/BehavioredClassifierImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class UseCaseImpl :virtual public BehavioredClassifierImpl, virtual public UseCase 
	{
		public: 
			UseCaseImpl(const UseCaseImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			UseCaseImpl& operator=(UseCaseImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			UseCaseImpl();

			//Additional constructors for the containments back reference
			UseCaseImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			UseCaseImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			UseCaseImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			UseCaseImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~UseCaseImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The query allIncludedUseCases() returns the transitive closure of all UseCases (directly or indirectly) included by this UseCase.
			result = (self.include.addition->union(self.include.addition->collect(uc | uc.allIncludedUseCases()))->asSet())
			<p>From package UML::UseCases.</p> */ 
			virtual std::shared_ptr<Bag<uml::UseCase> > allIncludedUseCases()  ;
			
			/*!
			 UseCases can only be involved in binary Associations.
			Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies a.memberEnd->size() = 2) */ 
			virtual bool binary_associations(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A UseCase cannot include UseCases that directly or indirectly include it.
			not allIncludedUseCases()->includes(self) */ 
			virtual bool cannot_include_self(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A UseCase must have a name.
			name -> notEmpty () */ 
			virtual bool must_have_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 UseCases cannot have Associations to UseCases specifying the same subject.
			Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies 
			   (
			   let usecases: Set(UseCase) = a.memberEnd.type->select(oclIsKindOf(UseCase))->collect(oclAsType(UseCase))->asSet() in
			   usecases->size() > 1 implies usecases->collect(subject)->size() > 1
			   )
			) */ 
			virtual bool no_association_to_use_case(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Extend relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<Subset<uml::Extend, uml::NamedElement > > getExtend() const ;
			
			/*!
			 The ExtensionPoints owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<Subset<uml::ExtensionPoint, uml::NamedElement > > getExtensionPoint() const ;
			
			/*!
			 The Include relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<Subset<uml::Include, uml::NamedElement > > getInclude() const ;
			
			/*!
			 The subjects to which this UseCase applies. Each subject or its parts realize all the UseCases that apply to it.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr< Bag<uml::Classifier> > getSubject() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
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
#endif /* end of include guard: UML_USECASEUSECASEIMPL_HPP */

