//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DEPLOYMENT_HPP
#define UML_DEPLOYMENT_HPP

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
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class DeployedArtifact;
}

namespace uml 
{
	class DeploymentSpecification;
}

namespace uml 
{
	class DeploymentTarget;
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
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "Dependency.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A deployment is the allocation of an artifact or artifact instance to a deployment target.
	A component deployment is the deployment of one or more artifacts or artifact instances to a deployment target, optionally parameterized by a deployment specification. Examples are executables and configuration files.
	<p>From package UML::Deployments.</p> */
	class Deployment:virtual public Dependency
	{
		public:
 			Deployment(const Deployment &) {}
			Deployment& operator=(Deployment const&) = delete;

		protected:
			Deployment(){}


			//Additional constructors for the containments back reference

			Deployment(std::weak_ptr<uml::DeploymentTarget > par_location);

			//Additional constructors for the containments back reference

			Deployment(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Deployment(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Deployment(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			Deployment(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Deployment() {}

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
			 The specification of properties that parameterize the deployment and execution of one or more Artifacts.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::DeploymentSpecification, uml::Element > > getConfiguration() const = 0;
			
			/*!
			 The Artifacts that are deployed onto a Node. This association specializes the supplier association.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::DeployedArtifact, uml::NamedElement /*Subset does not reference a union*/ > > getDeployedArtifact() const = 0;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual std::weak_ptr<uml::DeploymentTarget > getLocation() const = 0;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual void setLocation(std::shared_ptr<uml::DeploymentTarget> _location_location) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The specification of properties that parameterize the deployment and execution of one or more Artifacts.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::DeploymentSpecification, uml::Element > > m_configuration;
			/*!
			 The Artifacts that are deployed onto a Node. This association specializes the supplier association.
			<p>From package UML::Deployments.</p> */
			std::shared_ptr<Subset<uml::DeployedArtifact, uml::NamedElement /*Subset does not reference a union*/ > > m_deployedArtifact;
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			std::weak_ptr<uml::DeploymentTarget > m_location;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const = 0; 
	};

}
#endif /* end of include guard: UML_DEPLOYMENT_HPP */

