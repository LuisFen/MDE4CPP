//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORESIMPLEEXAMPLEMODELPACKAGEIMPL_HPP
#define ECORESIMPLEEXAMPLEMODELPACKAGEIMPL_HPP

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

#include <cassert>

#include "AuthorImpl.hpp"
#include "BookImpl.hpp"
#include "LibraryModelImpl.hpp"
#include "NamedElementImpl.hpp"

#include "EcoreSimpleExampleModelPackage.hpp"
#include "EcoreSimpleExampleModelPackage.hpp"
#include "EcorePackage.hpp"
#include "impl/EPackageImpl.hpp"

namespace ecoreSimpleExampleModel
{
	class EcoreSimpleExampleModelPackageImpl : public ecore::EPackageImpl ,virtual public EcoreSimpleExampleModelPackage
	{
		private:    
			EcoreSimpleExampleModelPackageImpl(EcoreSimpleExampleModelPackageImpl const&) = delete;
			EcoreSimpleExampleModelPackageImpl& operator=(EcoreSimpleExampleModelPackageImpl const&) = delete;

		protected:
			EcoreSimpleExampleModelPackageImpl();

		public:
			virtual ~EcoreSimpleExampleModelPackageImpl();

			// Begin Class Author
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAuthor() const ;
			
			
			
			// End Class Author

			// Begin Class Book
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getBook() const ;
			
			virtual std::shared_ptr<> get() const ;
			virtual std::shared_ptr<> get() const ;
			
			
			// End Class Book

			// Begin Class LibraryModel
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLibraryModel() const ;
			
			virtual std::shared_ptr<> get() const ;
			virtual std::shared_ptr<> get() const ;
			
			
			// End Class LibraryModel

			// Begin Class NamedElement
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getNamedElement() const ;
			virtual std::shared_ptr<> get() const ;
			
			
			
			// End Class NamedElement

			

		private:
			std::shared_ptr<ecore::EClass> authorEClass = nullptr;
			std::shared_ptr<ecore::EClass> bookEClass = nullptr;
			std::shared_ptr<ecore::EClass> libraryModelEClass = nullptr;
			std::shared_ptr<ecore::EClass> namedElementEClass = nullptr;
			
			

			friend class EcoreSimpleExampleModelPackage;

			static bool isInited;
			static EcoreSimpleExampleModelPackage* create();
			bool isInitialized = false;
 			bool isCreated = false;

			virtual void init();

		public:
			void initializePackageContents();
			void createPackageContents();
	};
}
#endif /* end of include guard: ECORESIMPLEEXAMPLEMODELPACKAGEIMPL_HPP */

