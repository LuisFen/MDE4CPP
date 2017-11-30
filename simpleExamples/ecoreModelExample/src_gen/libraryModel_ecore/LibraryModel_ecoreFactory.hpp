//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECOREFACTORY_HPP
#define LIBRARYMODEL_ECOREFACTORY_HPP

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

#include "EFactory.hpp"
#include <memory>

namespace libraryModel_ecore 
{	class Author;
	class Book;
	class LibraryModel;
	class NamedElement;
	class Picture;
	class LibraryModel_ecorePackage;
	class LibraryModel_ecoreFactory;
}

namespace libraryModel_ecore 
{
	class LibraryModel_ecoreFactory : virtual public ecore::EFactory 
	{
		private:    
			LibraryModel_ecoreFactory(LibraryModel_ecoreFactory const&) = delete;
			LibraryModel_ecoreFactory& operator=(LibraryModel_ecoreFactory const&) = delete;
		protected:
			LibraryModel_ecoreFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<LibraryModel_ecoreFactory> instance;
			public:
				static std::shared_ptr<LibraryModel_ecoreFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className, std::shared_ptr<EObject> _container, 	const unsigned int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID, std::shared_ptr<EObject> _container = nullptr, 	const unsigned int referenceID = -1) const = 0;

			virtual std::shared_ptr<Author> createAuthor() const = 0;
			
			virtual std::shared_ptr<Book> createBook() const = 0;
			//Add containing object
			virtual std::shared_ptr<Book> createBook_in_Library(std::weak_ptr<libraryModel_ecore::LibraryModel > par_library) const = 0;
			
			virtual std::shared_ptr<LibraryModel> createLibraryModel() const = 0;
			
			virtual std::shared_ptr<NamedElement> createNamedElement() const = 0;
			
			virtual std::shared_ptr<Picture> createPicture() const = 0;
			//Add containing object
			virtual std::shared_ptr<Picture> createPicture_in_Book(std::weak_ptr<libraryModel_ecore::Book > par_book) const = 0;
			
			
			//Package
			virtual std::shared_ptr<LibraryModel_ecorePackage> getLibraryModel_ecorePackage() const = 0;
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECOREFACTORY_HPP */

