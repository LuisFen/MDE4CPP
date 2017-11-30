//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUMLPLUGINIMPL_HPP
#define FUMLPLUGINIMPL_HPP

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

#include "FUMLPlugin.hpp"

namespace fUML 
{
	class FUMLPluginImpl : virtual public FUMLPlugin 
	{
		public:
			FUMLPluginImpl();
			virtual ~FUMLPluginImpl();
		
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
		
			virtual std::shared_ptr<ecore::EFactory> getFactory();
			virtual std::shared_ptr<ecore::EPackage> getPackage();
	};
}
#endif /* end of include guard: FUMLPLUGINIMPL_HPP */

