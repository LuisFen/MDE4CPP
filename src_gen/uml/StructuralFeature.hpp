//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STRUCTURALFEATURE_HPP
#define UML_STRUCTURALFEATURE_HPP

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
	class Feature;
}

namespace uml 
{
	class MultiplicityElement;
}

namespace uml 
{
	class Namespace;
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
	class Type;
}

namespace uml 
{
	class TypedElement;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "Feature.hpp"

#include "MultiplicityElement.hpp"

#include "TypedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A StructuralFeature is a typed feature of a Classifier that specifies the structure of instances of the Classifier.
	<p>From package UML::Classification.</p> */
	class StructuralFeature:virtual public Feature,virtual public MultiplicityElement,virtual public TypedElement
	{
		public:
 			StructuralFeature(const StructuralFeature &) {}
			StructuralFeature& operator=(StructuralFeature const&) = delete;

		protected:
			StructuralFeature(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StructuralFeature() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If isReadOnly is true, the StructuralFeature may not be written to after initialization.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsReadOnly() const = 0;
			
			/*!
			 If isReadOnly is true, the StructuralFeature may not be written to after initialization.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsReadOnly (bool _isReadOnly)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 If isReadOnly is true, the StructuralFeature may not be written to after initialization.
			<p>From package UML::Classification.</p> */ 
			bool m_isReadOnly =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_STRUCTURALFEATURE_HPP */

