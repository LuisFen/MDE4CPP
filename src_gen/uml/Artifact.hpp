//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ARTIFACT_HPP
#define UML_ARTIFACT_HPP

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
	class Artifact;
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

namespace uml 
{
	class DeployedArtifact;
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
	class Manifestation;
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
	class Operation;
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
	class Type;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "Classifier.hpp"

#include "DeployedArtifact.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
	An artifact is the source of a deployment to a node.
	<p>From package UML::Deployments.</p> */
	class Artifact:virtual public Classifier,virtual public DeployedArtifact
	{
		public:
 			Artifact(const Artifact &) {}
			Artifact& operator=(Artifact const&) = delete;

		protected:
			Artifact(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Artifact() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates a property with the specified name, type, lower bound, and upper bound as an owned attribute of this artifact. */ 
			virtual std::shared_ptr<uml::Property> createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper)  = 0;
			
			/*!
			 Creates an operation with the specified name, parameter names, parameter types, and return type (or null) as an owned operation of this artifact. */ 
			virtual std::shared_ptr<uml::Operation> createOwnedOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,std::shared_ptr<uml::Type>  returnType)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
			<p>From package UML::Deployments.</p> */ 
			virtual std::string getFileName() const = 0;
			
			/*!
			 A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
			<p>From package UML::Deployments.</p> */ 
			virtual void setFileName (std::string _fileName)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Manifestation, uml::Element > > getManifestation() const = 0;
			
			/*!
			 The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Artifact, uml::NamedElement > > getNestedArtifact() const = 0;
			
			/*!
			 The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Property, uml::Property,uml::NamedElement > > getOwnedAttribute() const = 0;
			
			/*!
			 The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement > > getOwnedOperation() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
			<p>From package UML::Deployments.</p> */ 
			std::string m_fileName ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::Manifestation, uml::Element > > m_manifestation;
			/*!
			 The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::Artifact, uml::NamedElement > > m_nestedArtifact;
			/*!
			 The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::Property, uml::Property,uml::NamedElement > > m_ownedAttribute;
			/*!
			 The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement > > m_ownedOperation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const = 0;/*!
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
#endif /* end of include guard: UML_ARTIFACT_HPP */

