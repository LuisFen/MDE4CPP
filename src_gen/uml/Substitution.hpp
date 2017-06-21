//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SUBSTITUTION_HPP
#define UML_SUBSTITUTION_HPP

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
	class OpaqueExpression;
}

namespace uml 
{
	class Realization;
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
#include "Realization.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A substitution is a relationship between two classifiers signifying that the substituting classifier complies with the contract specified by the contract classifier. This implies that instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
	<p>From package UML::Classification.</p> */
	class Substitution:virtual public Realization	{
		public:
 			Substitution(const Substitution &) {}
			Substitution& operator=(Substitution const&) = delete;
	
		protected:
			Substitution(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Substitution() {}

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
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier> getContract() const = 0;
			
			/*!
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual void setContract(std::shared_ptr<uml::Classifier> _contract) = 0;
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier> getSubstitutingClassifier() const = 0;
			
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual void setSubstitutingClassifier(std::shared_ptr<uml::Classifier> _substitutingClassifier) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Classifier> m_contract;
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Classifier> m_substitutingClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getTarget() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getSource() const = 0; 
	};

}
#endif /* end of include guard: UML_SUBSTITUTION_HPP */
