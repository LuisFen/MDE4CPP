//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LINKENDDESTRUCTIONDATA_HPP
#define UML_LINKENDDESTRUCTIONDATA_HPP

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
	class InputPin;
}

namespace uml 
{
	class LinkEndData;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class QualifierValue;
}

// base class includes
#include "LinkEndData.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 LinkEndDestructionData is LinkEndData used to provide values for one end of a link to be destroyed by a DestroyLinkAction.
	<p>From package UML::Actions.</p> */
	class LinkEndDestructionData:virtual public LinkEndData
	{
		public:
 			LinkEndDestructionData(const LinkEndDestructionData &) {}
			LinkEndDestructionData& operator=(LinkEndDestructionData const&) = delete;

		protected:
			LinkEndDestructionData(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LinkEndDestructionData() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 LinkEndDestructionData for ordered, nonunique Association ends must have a single destroyAt InputPin if isDestroyDuplicates is false, which must be of type UnlimitedNatural and have a multiplicity of 1..1. Otherwise, the action has no destroyAt input pin.
			if  not end.isOrdered or end.isUnique or isDestroyDuplicates
			then destroyAt = null
			else
				destroyAt <> null and 
				destroyAt->forAll(type=UnlimitedNatural and is(1,1))
			endif */ 
			virtual bool destroyAt_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether to destroy duplicates of the value in nonunique Association ends.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyDuplicates() const = 0;
			
			/*!
			 Specifies whether to destroy duplicates of the value in nonunique Association ends.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyDuplicates (bool _isDestroyDuplicates)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getDestroyAt() const = 0;
			
			/*!
			 The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual void setDestroyAt(std::shared_ptr<uml::InputPin> _destroyAt_destroyAt) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether to destroy duplicates of the value in nonunique Association ends.
			<p>From package UML::Actions.</p> */ 
			bool m_isDestroyDuplicates =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_destroyAt;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_LINKENDDESTRUCTIONDATA_HPP */

