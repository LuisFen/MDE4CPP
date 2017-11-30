//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTOBJECTIMPL_HPP
#define FUML_OBJECTOBJECTIMPL_HPP

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
#include "../Object.hpp"

#include "impl/ExtensionalValueImpl.hpp"

#include "SubsetUnion.hpp"

#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "Class.hpp"
#include "Classifier.hpp"


//*********************************
namespace fUML 
{
	class ObjectImpl :virtual public ExtensionalValueImpl, virtual public Object 
	{
		public: 
			ObjectImpl(const ObjectImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ObjectImpl& operator=(ObjectImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ObjectImpl();



		public:
			//destructor
			virtual ~ObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			/*!
			 */ 
			virtual void destroy()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> new_()  ;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::SignalInstance>  signalInstance)  ;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)  ;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ObjectActivation > getObjectActivation() const ;
			
			/*!
			 */
			virtual void setObjectActivation(std::shared_ptr<fUML::ObjectActivation> _objectActivation_objectActivation) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<uml::Classifier> > getTypes() const ;
			
							
			
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
#endif /* end of include guard: FUML_OBJECTOBJECTIMPL_HPP */

