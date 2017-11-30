//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP
#define FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP

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
#include "../ActivityEdgeInstance.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"

 #include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ActivityEdgeInstanceImpl :virtual public ecore::EObjectImpl,
virtual public ActivityEdgeInstance 
	{
		public: 
			ActivityEdgeInstanceImpl(const ActivityEdgeInstanceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityEdgeInstanceImpl& operator=(ActivityEdgeInstanceImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActivityEdgeInstanceImpl();



		public:
			//destructor
			virtual ~ActivityEdgeInstanceImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int countOfferedValue()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > getOfferedTokens()  ;
			
			/*!
			 */ 
			virtual bool hasOffer()  ;
			
			/*!
			 */ 
			virtual void sendOffer(std::shared_ptr<Bag<fUML::Token> >  tokens)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens(int maxCount)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::ActivityEdge > getEdge() const ;
			
			/*!
			 */
			virtual void setEdge(std::shared_ptr<uml::ActivityEdge> _edge_edge) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivationGroup > getGroup() const ;
			
			/*!
			 */
			virtual void setGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup> _group_group) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::Offer> > getOffers() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivation > getSource() const ;
			
			/*!
			 */
			virtual void setSource(std::shared_ptr<fUML::ActivityNodeActivation> _source_source) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivation > getTarget() const ;
			
			/*!
			 */
			virtual void setTarget(std::shared_ptr<fUML::ActivityNodeActivation> _target_target) ;
							
			
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
#endif /* end of include guard: FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP */

