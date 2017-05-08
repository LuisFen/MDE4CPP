//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPERATIONTEMPLATEPARAMETER_HPP
#define UML_OPERATIONTEMPLATEPARAMETER_HPP

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
	class Comment;
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
	class ParameterableElement;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

// base class includes
#include "TemplateParameter.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 An OperationTemplateParameter exposes an Operation as a formal parameter for a template.
	<p>From package UML::Classification.</p> */
	class OperationTemplateParameter:virtual public TemplateParameter	{
		public:
 			OperationTemplateParameter(const OperationTemplateParameter &) {}
			OperationTemplateParameter& operator=(OperationTemplateParameter const&) = delete;
	
		protected:
			OperationTemplateParameter(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~OperationTemplateParameter() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 default->notEmpty() implies (default.oclIsKindOf(Operation) and (let defaultOp : Operation = default.oclAsType(Operation) in 
			    defaultOp.ownedParameter->size() = parameteredElement.ownedParameter->size() and
			    Sequence{1.. defaultOp.ownedParameter->size()}->forAll( ix | 
			        let p1: Parameter = defaultOp.ownedParameter->at(ix), p2 : Parameter = parameteredElement.ownedParameter->at(ix) in
			          p1.type = p2.type and p1.upper = p2.upper and p1.lower = p2.lower and p1.direction = p2.direction and p1.isOrdered = p2.isOrdered and p1.isUnique = p2.isUnique))) */ 
			virtual bool match_default_signature(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
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
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_OPERATIONTEMPLATEPARAMETER_HPP */
