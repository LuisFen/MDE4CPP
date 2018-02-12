//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef PRIMITIVETYPES_METAMODELPACKAGEIMPL_HPP
#define PRIMITIVETYPES_METAMODELPACKAGEIMPL_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "abstractDataTypes/SubsetUnion.hpp"


#include "primitivetypesReflection/PrimitiveTypesPackage.hpp"
#include "uml/impl/PackageImpl.hpp"	
#include "uml/UmlFactory.hpp"

namespace PrimitiveTypes
{
	class PrimitiveTypesPackageImpl : virtual public uml::PackageImpl ,virtual public PrimitiveTypesPackage
	{
			friend class PrimitiveTypesPackage;
			// Constructor
			PrimitiveTypesPackageImpl();

		public:
			// destructor
			virtual ~PrimitiveTypesPackageImpl();

			//getter for the ownedMember
			virtual std::shared_ptr<uml::PrimitiveType> get_PrimitiveTypes_Boolean();
			virtual std::shared_ptr<uml::PrimitiveType> get_PrimitiveTypes_Integer();
			virtual std::shared_ptr<uml::PrimitiveType> get_PrimitiveTypes_Real();
			virtual std::shared_ptr<uml::PrimitiveType> get_PrimitiveTypes_String();
			virtual std::shared_ptr<uml::PrimitiveType> get_PrimitiveTypes_UnlimitedNatural();
			

		private:
			//private variables for ownedMember of the metamodel package
			std::shared_ptr<uml::PrimitiveType> primitiveTypes_Boolean = nullptr;
			std::shared_ptr<uml::PrimitiveType> primitiveTypes_Integer = nullptr;
			std::shared_ptr<uml::PrimitiveType> primitiveTypes_Real = nullptr;
			std::shared_ptr<uml::PrimitiveType> primitiveTypes_String = nullptr;
			std::shared_ptr<uml::PrimitiveType> primitiveTypes_UnlimitedNatural = nullptr;
			

			static PrimitiveTypesPackage* create();
			static bool isInited;
			bool isInitialized = false;
			bool isCreated = false;

			void initMetaModel();
			virtual void init();

		public:
 			void initializePackageContents();
			void createPackageContents();

		private:
			void createPackageActivities(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageClasses(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageDependencies(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageEnumerationLiterals(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageInstanceSpecifications(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageInterfaces(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackagePrimitiveTypes(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageStereotypes(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);
			void createPackageValueSpecifications(std::shared_ptr<PrimitiveTypesPackageImpl> primitiveTypes, std::shared_ptr<uml::UmlFactory> factory);

			void initializePackageActivities();
			void initializePackageClasses();
			void initializePackageDependencies();
			void initializePackageInstanceSpecifications();
			void initializePackageInterfaces();
			void initializePackageStereotypes();
	};
} 
#endif /* end of include guard: PRIMITIVETYPES_METAMODELPACKAGEIMPL_HPP */
