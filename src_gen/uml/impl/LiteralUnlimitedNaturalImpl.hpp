//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALUNLIMITEDNATURALLITERALUNLIMITEDNATURALIMPL_HPP
#define UML_LITERALUNLIMITEDNATURALLITERALUNLIMITEDNATURALIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralUnlimitedNatural.hpp"

#include "impl/LiteralSpecificationImpl.hpp"



//*********************************
namespace uml 
{
	class LiteralUnlimitedNaturalImpl :virtual public LiteralSpecificationImpl, virtual public LiteralUnlimitedNatural 
	{
		public: 
			LiteralUnlimitedNaturalImpl(const LiteralUnlimitedNaturalImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LiteralUnlimitedNaturalImpl& operator=(LiteralUnlimitedNaturalImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LiteralUnlimitedNaturalImpl();

		public:
			//destructor
			virtual ~LiteralUnlimitedNaturalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The specified UnlimitedNatural value.
			<p>From package UML::Values.</p> */ 
			virtual int getValue() const ;
			
			/*!
			 The specified UnlimitedNatural value.
			<p>From package UML::Values.</p> */ 
			virtual void setValue (int _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_LITERALUNLIMITEDNATURALLITERALUNLIMITEDNATURALIMPL_HPP */
