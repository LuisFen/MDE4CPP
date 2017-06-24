//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_PLUGIN_HPP
#define CALCMODEL_PLUGIN_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "SubsetUnion.hpp"

#include "FUMLPlugin.hpp"

namespace CalcModel
{
	class CalcModelExecPlugin : virtual public FUMLPlugin
	{
		public:
			static std::shared_ptr<MDE4CPPPlugin> eInstance();
	
			virtual std::string eNAME() = 0;
			virtual std::string eNS_URI() = 0;
			virtual std::string eNS_PREFIX() = 0;
	
			virtual boost::any executeActivity(std::string activityName, std::shared_ptr<std::vector<boost::any>> parameterList) = 0;
	
		protected:
			CalcModelExecPlugin(){};
			virtual ~CalcModelExecPlugin(){};
	
		private:
			static std::shared_ptr<MDE4CPPPlugin> instance;
	};
}
#endif /* end of include guard: CALCMODEL_EXECPLUGIN_HPP */
