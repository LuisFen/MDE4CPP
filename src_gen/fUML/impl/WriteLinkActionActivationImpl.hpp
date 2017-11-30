//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP
#define FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../WriteLinkActionActivation.hpp"

#include "impl/LinkActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class WriteLinkActionActivationImpl :virtual public LinkActionActivationImpl, virtual public WriteLinkActionActivation 
	{
		public: 
			WriteLinkActionActivationImpl(const WriteLinkActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			WriteLinkActionActivationImpl& operator=(WriteLinkActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			WriteLinkActionActivationImpl();



		public:
			//destructor
			virtual ~WriteLinkActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP */

