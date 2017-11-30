//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1IMPL_HPP
#define FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1IMPL_HPP

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
#include "../ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl :virtual public ecore::EObjectImpl,
virtual public ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1 
	{
		public: 
			ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl(const ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl& operator=(ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl();



		public:
			//destructor
			virtual ~ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl();
			
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
#endif /* end of include guard: FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1IMPL_HPP */

