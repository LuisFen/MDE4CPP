//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_SERVICE_SERVICEIMPL_HPP
#define STANDARDPROFILE_SERVICE_SERVICEIMPL_HPP

#include <functional>

//Model includes
#include "../Service.hpp"
#include "uml/impl/StereotypeImpl.hpp"
#include "uml/Property.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Property;
}

//*********************************
namespace StandardProfile
{
	class ServiceImpl : virtual public uml::StereotypeImpl, virtual public Service
	{
		private:    
			ServiceImpl(ServiceImpl const&) = delete;
			ServiceImpl& operator=(ServiceImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			ServiceImpl();
			virtual std::shared_ptr<Service> getThisServicePtr();
			virtual void setThisServicePtr(std::weak_ptr<Service> thisServicePtr);


		public:
			//destructor
			virtual ~ServiceImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Component> getBase_Component() const ;
			virtual void setBase_Component (std::weak_ptr<uml::Component> _base_Component);
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual Any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property, Any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
			
		
		private:
			std::weak_ptr<Service> m_thisServicePtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_SERVICE_SERVICEIMPL_HPP */