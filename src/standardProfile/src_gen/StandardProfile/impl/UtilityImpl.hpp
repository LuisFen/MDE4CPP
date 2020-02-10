//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_UTILITYUTILITYIMPL_HPP
#define STANDARDPROFILE_UTILITYUTILITYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Utility.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace StandardProfile 
{
	class UtilityImpl :virtual public ecore::EObjectImpl,
virtual public Utility 
	{
		public: 
			UtilityImpl(const UtilityImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			UtilityImpl& operator=(UtilityImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			UtilityImpl();
			virtual std::shared_ptr<Utility> getThisUtilityPtr() const;
			virtual void setThisUtilityPtr(std::weak_ptr<Utility> thisUtilityPtr);



		public:
			//destructor
			virtual ~UtilityImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Class > getBase_Class() const ;
			
			/*!
			 */
			virtual void setBase_Class(std::shared_ptr<uml::Class> _base_Class_base_Class) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Utility> m_thisUtilityPtr;
	};
}
#endif /* end of include guard: STANDARDPROFILE_UTILITYUTILITYIMPL_HPP */