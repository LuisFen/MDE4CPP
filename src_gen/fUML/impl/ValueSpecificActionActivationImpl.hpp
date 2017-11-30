//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUESPECIFICACTIONACTIVATIONVALUESPECIFICACTIONACTIVATIONIMPL_HPP
#define FUML_VALUESPECIFICACTIONACTIVATIONVALUESPECIFICACTIONACTIVATIONIMPL_HPP

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
#include "../ValueSpecificActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ValueSpecificActionActivationImpl :virtual public ActionActivationImpl, virtual public ValueSpecificActionActivation 
	{
		public: 
			ValueSpecificActionActivationImpl(const ValueSpecificActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ValueSpecificActionActivationImpl& operator=(ValueSpecificActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ValueSpecificActionActivationImpl();



		public:
			//destructor
			virtual ~ValueSpecificActionActivationImpl();
			
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
#endif /* end of include guard: FUML_VALUESPECIFICACTIONACTIVATIONVALUESPECIFICACTIONACTIVATIONIMPL_HPP */

