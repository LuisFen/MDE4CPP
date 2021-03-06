//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_DERIVE_DERIVEIMPL_HPP
#define STANDARDPROFILE_DERIVE_DERIVEIMPL_HPP

#include <functional>

//Model includes
#include "../Derive.hpp"
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
	class DeriveImpl : virtual public uml::StereotypeImpl, virtual public Derive
	{
		public: 
			DeriveImpl(const DeriveImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DeriveImpl& operator=(DeriveImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			DeriveImpl();
			virtual std::shared_ptr<Derive> getThisDerivePtr();
			virtual void setThisDerivePtr(std::weak_ptr<Derive> thisDerivePtr);


		public:

			//destructor
			virtual ~DeriveImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Abstraction> getBase_Abstraction() const ;
			virtual void setBase_Abstraction (std::weak_ptr<uml::Abstraction> _base_Abstraction);
			

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
			std::weak_ptr<Derive> m_thisDerivePtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_DERIVE_DERIVEIMPL_HPP */
