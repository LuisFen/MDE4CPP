//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef FUMLMULTIPLEPINS_FACTORY_HPP
#define FUMLMULTIPLEPINS_FACTORY_HPP

#include "uml/Factory.hpp"

namespace fUMLMultiplePins 
{
	class TestClass;
	class FUMLMultiplePinsPackage;
	class FUMLMultiplePinsFactory;

	class FUMLMultiplePinsFactory : virtual public uml::Factory 
	{ 
		protected:
			//protected default construcotr
			FUMLMultiplePinsFactory(){}

			//Singleton Instance and Getter
			
			private:
				static std::shared_ptr<FUMLMultiplePinsFactory> instance;
			public:
				static std::shared_ptr<FUMLMultiplePinsFactory> eInstance();

			//Creator functions
			virtual std::shared_ptr<uml::Element> create(std::string _className) = 0;

			virtual std::shared_ptr<fUMLMultiplePins::TestClass> createTestClass() = 0;
			
			

			//Package
			virtual std::shared_ptr<FUMLMultiplePinsPackage> getFUMLMultiplePinsPackage() = 0;
	};
}
#endif /* end of include guard: FUMLMULTIPLEPINS_FACTORY_HPP */
