//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_MAINACTIVITY_EXECUTION_HPP
#define CALCMODEL_MAINACTIVITY_EXECUTION_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>

#include "fUML/impl/ObjectImpl.hpp"
#include "MainActivity.hpp"

namespace CalcModel 
{
	class MainActivityExecution : public fUML::ObjectImpl 
	{
		public:
		    //constructors
		    MainActivityExecution(MainActivityExecution &obj);
		    MainActivityExecution(std::shared_ptr<MainActivity*>);
		 	MainActivityExecution();
		    //destructor
		    virtual ~MainActivityExecution();
		
		    virtual ecore::EObject* copy();
			
			std::shared_ptr<MainActivity> getUmlValue() const;
			void setUmlValue(std::shared_ptr<MainActivity>);
		
		protected:
			std::shared_ptr<MainActivity> m_umlValue;
	};
}
#endif /* end of include guard: CALCMODEL_MAINACTIVITY_EXECUTION_HPP */
