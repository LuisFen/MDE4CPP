//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIORFACTORY_HPP
#define FUML_SEMANTICS_COMMONBEHAVIORFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"

namespace fUML::Semantics::CommonBehavior 
{
	class CallEventBehavior;
	class CallEventExecution;
	class CallEventOccurrence;
	class ClassifierBehaviorExecution;
	class ClassifierBehaviorInvocationEventAccepter;
	class EventAccepter;
	class EventDispatchLoop;
	class EventOccurrence;
	class Execution;
	class FIFOGetNextEventStrategy;
	class GetNextEventStrategy;
	class InvocationEventOccurrence;
	class ObjectActivation;
	class OpaqueBehaviorExecution;
	class ParameterValue;
	class SignalEventOccurrence;
}


namespace fUML::Semantics::CommonBehavior 
{
	class CommonBehaviorFactory : virtual public ecore::EFactory 
	{
		private:    
			CommonBehaviorFactory(CommonBehaviorFactory const&) = delete;
			CommonBehaviorFactory& operator=(CommonBehaviorFactory const&) = delete;
		protected:
			CommonBehaviorFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<CommonBehaviorFactory> instance;
			public:
				static std::shared_ptr<CommonBehaviorFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventBehavior> createCallEventBehavior(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventExecution> createCallEventExecution(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventOccurrence> createCallEventOccurrence(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ClassifierBehaviorExecution> createClassifierBehaviorExecution(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ClassifierBehaviorInvocationEventAccepter> createClassifierBehaviorInvocationEventAccepter(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::EventDispatchLoop> createEventDispatchLoop(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> createEventOccurrence(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::FIFOGetNextEventStrategy> createFIFOGetNextEventStrategy(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::InvocationEventOccurrence> createInvocationEventOccurrence(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ObjectActivation> createObjectActivation(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ParameterValue> createParameterValue(const int metaElementID=-1) const = 0;
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::SignalEventOccurrence> createSignalEventOccurrence(const int metaElementID=-1) const = 0;
			
			
	};
}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIORFACTORY_HPP */