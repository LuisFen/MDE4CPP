//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXTEND_HPP
#define UML_EXTEND_HPP

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
	class DirectedRelationship;
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
	class ExtensionPoint;
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
	class StringExpression;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "DirectedRelationship.hpp"

#include "NamedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A relationship from an extending UseCase to an extended UseCase that specifies how and when the behavior defined in the extending UseCase can be inserted into the behavior defined in the extended UseCase.
	<p>From package UML::UseCases.</p> */
	class Extend:virtual public DirectedRelationship,virtual public NamedElement
	{
		public:
 			Extend(const Extend &) {}
			Extend& operator=(Extend const&) = delete;

		protected:
			Extend(){}


			//Additional constructors for the containments back reference

			Extend(std::weak_ptr<uml::UseCase > par_extension);

			//Additional constructors for the containments back reference

			Extend(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Extend(std::weak_ptr<uml::Element > par_owner);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Extend() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The ExtensionPoints referenced by the Extend relationship must belong to the UseCase that is being extended.
			extensionLocation->forAll (xp | extendedCase.extensionPoint->includes(xp)) */ 
			virtual bool extension_points(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the condition that must hold when the first ExtensionPoint is reached for the extension to take place. If no constraint is associated with the Extend relationship, the extension is unconditional.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<uml::Constraint > getCondition() const = 0;
			
			/*!
			 References the condition that must hold when the first ExtensionPoint is reached for the extension to take place. If no constraint is associated with the Extend relationship, the extension is unconditional.
			<p>From package UML::UseCases.</p> */
			virtual void setCondition(std::shared_ptr<uml::Constraint> _condition_condition) = 0;
			/*!
			 The UseCase that is being extended.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<uml::UseCase > getExtendedCase() const = 0;
			
			/*!
			 The UseCase that is being extended.
			<p>From package UML::UseCases.</p> */
			virtual void setExtendedCase(std::shared_ptr<uml::UseCase> _extendedCase_extendedCase) = 0;
			/*!
			 The UseCase that represents the extension and owns the Extend relationship.
			<p>From package UML::UseCases.</p> */
			virtual std::weak_ptr<uml::UseCase > getExtension() const = 0;
			
			/*!
			 The UseCase that represents the extension and owns the Extend relationship.
			<p>From package UML::UseCases.</p> */
			virtual void setExtension(std::shared_ptr<uml::UseCase> _extension_extension) = 0;
			/*!
			 An ordered list of ExtensionPoints belonging to the extended UseCase, specifying where the respective behavioral fragments of the extending UseCase are to be inserted. The first fragment in the extending UseCase is associated with the first extension point in the list, the second fragment with the second point, and so on. Note that, in most practical cases, the extending UseCase has just a single behavior fragment, so that the list of ExtensionPoints is trivial.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr< Bag<uml::ExtensionPoint> > getExtensionLocation() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References the condition that must hold when the first ExtensionPoint is reached for the extension to take place. If no constraint is associated with the Extend relationship, the extension is unconditional.
			<p>From package UML::UseCases.</p> */
			std::shared_ptr<uml::Constraint > m_condition;
			/*!
			 The UseCase that is being extended.
			<p>From package UML::UseCases.</p> */
			std::shared_ptr<uml::UseCase > m_extendedCase;
			/*!
			 The UseCase that represents the extension and owns the Extend relationship.
			<p>From package UML::UseCases.</p> */
			std::weak_ptr<uml::UseCase > m_extension;
			/*!
			 An ordered list of ExtensionPoints belonging to the extended UseCase, specifying where the respective behavioral fragments of the extending UseCase are to be inserted. The first fragment in the extending UseCase is associated with the first extension point in the list, the second fragment with the second point, and so on. Note that, in most practical cases, the extending UseCase has just a single behavior fragment, so that the list of ExtensionPoints is trivial.
			<p>From package UML::UseCases.</p> */
			std::shared_ptr< Bag<uml::ExtensionPoint> > m_extensionLocation;
			

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
#endif /* end of include guard: UML_EXTEND_HPP */

