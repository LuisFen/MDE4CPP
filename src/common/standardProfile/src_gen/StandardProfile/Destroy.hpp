//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_DESTROY__HPP
#define STANDARDPROFILE_DESTROY__HPP




//Forward Declaration for used types
namespace uml 
{
	class BehavioralFeature;
}

// base class includes
#include "uml/Stereotype.hpp"



namespace StandardProfile
{
	class Destroy : virtual public uml::Stereotype 
	{
		private:    
			Destroy(const Destroy& that) = delete;

		protected:
			Destroy(){}

		public:
			//destructor
			virtual ~Destroy() {}

			//*********************************
			// Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::BehavioralFeature> getBase_BehavioralFeature() const  = 0;
			virtual void setBase_BehavioralFeature (std::weak_ptr<uml::BehavioralFeature> _base_BehavioralFeature) = 0;
			
			
			//*********************************
			// Operations
			//*********************************
			
			
		protected:
			//*********************************
			// Members
			//*********************************
			std::weak_ptr<uml::BehavioralFeature> m_base_BehavioralFeature;
			
	};
}
#endif /* end of include guard: STANDARDPROFILE_DESTROY__HPP */