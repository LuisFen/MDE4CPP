//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP
#define FUML_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP

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
#include "../ClauseActivation.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ClauseActivationImpl :virtual public ecore::EObjectImpl,
virtual public ClauseActivation 
	{
		public: 
			ClauseActivationImpl(const ClauseActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClauseActivationImpl& operator=(ClauseActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ClauseActivationImpl();



		public:
			//destructor
			virtual ~ClauseActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::BooleanValue> getDecision()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ClauseActivation> > getPredecessors()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ClauseActivation> > getSuccessors()  ;
			
			/*!
			 */ 
			virtual bool isReady()  ;
			
			/*!
			 */ 
			virtual void recieveControl()  ;
			
			/*!
			 */ 
			virtual void runTest()  ;
			
			/*!
			 */ 
			virtual void selectBody()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Clause > getClause() const ;
			
			/*!
			 */
			virtual void setClause(std::shared_ptr<uml::Clause> _clause_clause) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ConditionalNodeActivation > getConditionalNodeActivation() const ;
			
			/*!
			 */
			virtual void setConditionalNodeActivation(std::shared_ptr<fUML::ConditionalNodeActivation> _conditionalNodeActivation_conditionalNodeActivation) ;
							
			
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
#endif /* end of include guard: FUML_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP */

