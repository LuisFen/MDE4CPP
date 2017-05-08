//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ENUMERATIONLITERAL_HPP
#define UML_ENUMERATIONLITERAL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

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
	class Deployment;
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
	class Enumeration;
}

namespace uml 
{
	class InstanceSpecification;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Slot;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "InstanceSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An EnumerationLiteral is a user-defined data value for an Enumeration.
	<p>From package UML::SimpleClassifiers.</p> */
	class EnumerationLiteral:virtual public InstanceSpecification	{
		public:
 			EnumerationLiteral(const EnumerationLiteral &) {}
			EnumerationLiteral& operator=(EnumerationLiteral const&) = delete;
	
		protected:
			EnumerationLiteral(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EnumerationLiteral() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getClassifiers()  = 0;
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Enumeration that this EnumerationLiteral is a member of.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Enumeration> getEnumeration() const = 0;
			
			/*!
			 The Enumeration that this EnumerationLiteral is a member of.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setEnumeration(std::shared_ptr<uml::Enumeration> _enumeration) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Enumeration that this EnumerationLiteral is a member of.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<uml::Enumeration> m_enumeration;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_ENUMERATIONLITERAL_HPP */
