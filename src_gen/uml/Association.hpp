//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ASSOCIATION_HPP
#define UML_ASSOCIATION_HPP

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
	class Relationship;
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

#include "Relationship.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A link is a tuple of values that refer to typed objects.  An Association classifies a set of links, each of which is an instance of the Association.  Each value in the link refers to an instance of the type of the corresponding end of the Association.
	<p>From package UML::StructuredClassifiers.</p> */
	class Association:virtual public Classifier,virtual public Relationship
	{
		public:
 			Association(const Association &) {}
			Association& operator=(Association const&) = delete;

		protected:
			Association(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Association() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Ends of Associations with more than two ends must be owned by the Association itself.
			memberEnd->size() > 2 implies ownedEnd->includesAll(memberEnd) */ 
			virtual bool association_ends(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Only binary Associations can be aggregations.
			memberEnd->exists(aggregation <> AggregationKind::none) implies (memberEnd->size() = 2 and memberEnd->exists(aggregation = AggregationKind::none)) */ 
			virtual bool binary_associations(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 memberEnd->forAll(type->notEmpty()) */ 
			virtual bool ends_must_be_typed(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 endType is derived from the types of the member ends.
			result = (memberEnd->collect(type)->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Type> > getEndTypes()  = 0;
			
			/*!
			 Determines whether this association is a binary association, i.e. whether it has exactly two member ends. */ 
			virtual bool isBinary()  = 0;
			
			/*!
			 An Association specializing another Association has the same number of ends as the other Association.
			parents()->select(oclIsKindOf(Association)).oclAsType(Association)->forAll(p | p.memberEnd->size() = self.memberEnd->size()) */ 
			virtual bool specialized_end_number(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 When an Association specializes another Association, every end of the specific Association corresponds to an end of the general Association, and the specific end reaches the same type or a subtype of the corresponding general end.
			Sequence{1..memberEnd->size()}->
				forAll(i | general->select(oclIsKindOf(Association)).oclAsType(Association)->
					forAll(ga | self.memberEnd->at(i).type.conformsTo(ga.memberEnd->at(i).type))) */ 
			virtual bool specialized_end_types(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether the Association is derived from other model elements such as other Associations.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsDerived() const = 0;
			
			/*!
			 Specifies whether the Association is derived from other model elements such as other Associations.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsDerived (bool _isDerived)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifiers that are used as types of the ends of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Type, uml::Element > > getEndType() const = 0;
			
			/*!
			 Each end represents participation of instances of the Classifier connected to the end in links of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::NamedElement > > getMemberEnd() const = 0;
			
			/*!
			 The navigable ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Property, uml::Property /*Subset does not reference a union*/ > > getNavigableOwnedEnd() const = 0;
			
			/*!
			 The ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Property /*Subset does not reference a union*/,uml::Feature,uml::NamedElement > > getOwnedEnd() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether the Association is derived from other model elements such as other Associations.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isDerived =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Classifiers that are used as types of the ends of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Type, uml::Element > > m_endType;
			/*!
			 Each end represents participation of instances of the Classifier connected to the end in links of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<SubsetUnion<uml::Property, uml::NamedElement > > m_memberEnd;
			/*!
			 The navigable ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Property, uml::Property /*Subset does not reference a union*/ > > m_navigableOwnedEnd;
			/*!
			 The ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<SubsetUnion<uml::Property, uml::Property /*Subset does not reference a union*/,uml::Feature,uml::NamedElement > > m_ownedEnd;
			

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
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_ASSOCIATION_HPP */

