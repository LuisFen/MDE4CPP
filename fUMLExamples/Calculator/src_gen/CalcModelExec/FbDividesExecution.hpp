//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_PRIMECHECKER_FBDIVIDES_EXECUTION_HPP
#define CALCMODEL_PRIMECHECKER_FBDIVIDES_EXECUTION_HPP

#include "fUML/impl/OpaqueBehaviorExecutionImpl.hpp"

namespace CalcModel 
{
	class FbDividesExecution: virtual public fUML::OpaqueBehaviorExecutionImpl 
	{
		public:
		    //constructor
		    FbDividesExecution(const FbDividesExecution &obj);
		    FbDividesExecution();
		    //destructor
		    virtual ~FbDividesExecution();
		
		    virtual void doBody(std::shared_ptr<Bag<fUML::ParameterValue> > inputParameters, std::shared_ptr<Bag<fUML::ParameterValue> > outputParameters);
		    virtual std::shared_ptr<ecore::EObject> copy() const;
			virtual void setThisExecutionPtr(std::weak_ptr<FbDividesExecution> thisExecutionPtr);
	};
}
#endif /* end of include guard: CALCMODEL_PRIMECHECKER_FBDIVIDES_EXECUTION_HPP */