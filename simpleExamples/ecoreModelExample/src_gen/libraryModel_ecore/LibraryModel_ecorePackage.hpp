//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECOREPACKAGE_HPP
#define LIBRARYMODEL_ECOREPACKAGE_HPP

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

#include "EPackage.hpp"
#include "EcoreFactory.hpp"

namespace libraryModel_ecore 
{	class Author;
	class Book;
	class LibraryModel;
	class NamedElement;
	class Picture;
	class LibraryModel_ecorePackage;
}

namespace libraryModel_ecore 
{
	/*!
	The Metamodel Package for the libraryModel_ecore metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class LibraryModel_ecorePackage : virtual public ecore::EPackage 
	{
		private:    
			LibraryModel_ecorePackage(LibraryModel_ecorePackage const&) = delete;
			LibraryModel_ecorePackage& operator=(LibraryModel_ecorePackage const&) = delete;

		protected:
			LibraryModel_ecorePackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class Author
			//Class and Feature IDs 
			static const int AUTHOR = 1;
			static const int AUTHOR_FEATURE_COUNT = 1;
			static const int AUTHOR_OPERATION_COUNT = 0;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAuthor() const = 0;
			
			
			
			// End Class Author


			// Begin Class Book
			//Class and Feature IDs 
			static const int BOOK = 0;
			static const int BOOK_FEATURE_COUNT = 4;
			static const int BOOK_OPERATION_COUNT = 0;
			
			static const int BOOK_AUTHORS = 01;
			static const int BOOK_LIBRARY = 02;
			static const int BOOK_PICTURES = 03;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getBook() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getBook_Authors() const = 0;
			virtual std::shared_ptr<ecore::EReference> getBook_Library() const = 0;
			virtual std::shared_ptr<ecore::EReference> getBook_Pictures() const = 0;
			
			
			// End Class Book


			// Begin Class LibraryModel
			//Class and Feature IDs 
			static const int LIBRARYMODEL = 2;
			static const int LIBRARYMODEL_FEATURE_COUNT = 2;
			static const int LIBRARYMODEL_OPERATION_COUNT = 0;
			
			static const int LIBRARYMODEL_AUTHORS = 21;
			static const int LIBRARYMODEL_BOOK = 20;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLibraryModel() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getLibraryModel_Authors() const = 0;
			virtual std::shared_ptr<ecore::EReference> getLibraryModel_Book() const = 0;
			
			
			// End Class LibraryModel


			// Begin Class NamedElement
			//Class and Feature IDs 
			static const int NAMEDELEMENT = 3;
			static const int NAMEDELEMENT_FEATURE_COUNT = 1;
			static const int NAMEDELEMENT_OPERATION_COUNT = 0;
			static const int NAMEDELEMENT_NAME = 30;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getNamedElement() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getNamedElement_Name() const = 0;
			
			
			
			// End Class NamedElement


			// Begin Class Picture
			//Class and Feature IDs 
			static const int PICTURE = 4;
			static const int PICTURE_FEATURE_COUNT = 3;
			static const int PICTURE_OPERATION_COUNT = 0;
			static const int PICTURE_PAGENUMBER = 42;
			
			static const int PICTURE_BOOK = 41;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getPicture() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getPicture_PageNumber() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getPicture_Book() const = 0;
			
			
			// End Class Picture

			
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<LibraryModel_ecorePackage> instance;
			public:
				static std::shared_ptr<LibraryModel_ecorePackage> eInstance();
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECOREPACKAGE_HPP */

