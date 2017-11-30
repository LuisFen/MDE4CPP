//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREDCLASSIFIER_HPP
#define UML_BEHAVIOREDCLASSIFIER_HPP

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
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
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
	class ElementImport;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class Interface;
}

namespace uml 
{
	class InterfaceRealization;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Property;
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
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "Classifier.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A BehavioredClassifier may have InterfaceRealizations, and owns a set of Behaviors one of which may specify the behavior of the BehavioredClassifier itself.
	<p>From package UML::SimpleClassifiers.</p> */
	class BehavioredClassifier:virtual public Classifier
	{
		public:
 			BehavioredClassifier(const BehavioredClassifier &) {}
			BehavioredClassifier& operator=(BehavioredClassifier const&) = delete;

		protected:
			BehavioredClassifier(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~BehavioredClassifier() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 If a behavior is classifier behavior, it does not have a specification.
			classifierBehavior->notEmpty() implies classifierBehavior.specification->isEmpty() */ 
			virtual bool class_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Retrieves all the interfaces on which this behaviored classifier or any of its parents has an interface realization dependency. */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getAllImplementedInterfaces()  = 0;
			
			/*!
			 Retrieves the interfaces on which this behaviored classifier has an interface realization dependency. */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getImplementedInterfaces()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Behavior that specifies the behavior of the BehavioredClassifier itself.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Behavior > getClassifierBehavior() const = 0;
			
			/*!
			 A Behavior that specifies the behavior of the BehavioredClassifier itself.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setClassifierBehavior(std::shared_ptr<uml::Behavior> _classifierBehavior_classifierBehavior) = 0;
			/*!
			 The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::InterfaceRealization, uml::Element > > getInterfaceRealization() const = 0;
			
			/*!
			 Behaviors owned by a BehavioredClassifier.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Behavior, uml::NamedElement > > getOwnedBehavior() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A Behavior that specifies the behavior of the BehavioredClassifier itself.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<uml::Behavior > m_classifierBehavior;
			/*!
			 The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<Subset<uml::InterfaceRealization, uml::Element > > m_interfaceRealization;
			/*!
			 Behaviors owned by a BehavioredClassifier.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<SubsetUnion<uml::Behavior, uml::NamedElement > > m_ownedBehavior;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_BEHAVIOREDCLASSIFIER_HPP */

