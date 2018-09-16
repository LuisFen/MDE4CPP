#include "LibraryModel_uml/impl/LibraryImpl.hpp"

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif

#include <iostream>

#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/Any.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "LibraryModel_uml/impl/LibraryModel_umlPackageImpl.hpp"
#include "uml/Class.hpp"
#include "LibraryModel_uml/Author.hpp"
#include "LibraryModel_uml/Book.hpp"


//Included from operation "printLibrary"
#include "LibraryModel_uml/Picture.hpp"


using namespace LibraryModel_uml;

//*********************************
// Constructor / Destructor
//*********************************
LibraryImpl::LibraryImpl()
{
	//***********************************
	// init Get Set
	//getter init
	m_getterMap.insert(std::pair<std::string,std::function<Any()>>("LibraryModel_uml::Library::authors",[this](){ return eAny(this->getAuthors());}));
	m_getterMap.insert(std::pair<std::string,std::function<Any()>>("LibraryModel_uml::Library::books",[this](){ return eAny(this->getBooks());}));
	
	
	m_unsetterMap.insert(std::pair<std::string,std::function<void()>>("LibraryModel_uml::Library::authors",[this](){m_authors->clear();}));
	m_unsetterMap.insert(std::pair<std::string,std::function<void()>>("LibraryModel_uml::Library::books",[this](){m_books->clear();}));
	 

	// init properties without default
	m_authors.reset(new Bag<LibraryModel_uml::Author>());
	
	m_books.reset(new Bag<LibraryModel_uml::Book>());
	

	
}




LibraryImpl::~LibraryImpl()
{
}

std::shared_ptr<uml::Class> LibraryImpl::getMetaClass()
{
	return LibraryModel_umlPackageImpl::eInstance()->get_LibraryModel_uml_Library();
}

//*********************************
// Attribute Setter Getter
//*********************************

std::shared_ptr<Bag<LibraryModel_uml::Author>> LibraryImpl::getAuthors() const 
{
	return m_authors;
}


std::shared_ptr<Bag<LibraryModel_uml::Book>> LibraryImpl::getBooks() const 
{
	return m_books;
}

//*********************************
// Operations
//*********************************
void LibraryImpl::printLibrary()
{

	// Implemented as Function behaviour fbPrintLibrary

	std::shared_ptr< Bag<Book> > books = this->getBooks();

	for(Bag<Book>::const_iterator it=books->begin();it!=books->end();it++)
	{
		std::cout << "The book " << (*it)->getName() << std::endl;
		{
			std::cout << "\twas written by:" << std::endl;

			std::shared_ptr< Bag<Author> > authors= (*it)->getAuthors();
			for(Bag<Author>::const_iterator itA=authors->begin();itA!=authors->end();itA++)
			{
				std::cout << "\t\t- " << (*itA)->getName() << std::endl;
			}
		}
		{
			std::cout << "\tIndex of Figures:" << std::endl;

			std::shared_ptr< Bag<Picture> > pictures= (*it)->getPictures();
			for(Bag<Picture>::const_iterator itP=pictures->begin();itP!=pictures->end();itP++)
			{
				std::cout << "\t\t- " << (*itP)->getName() << " - Page number: "<< (*itP)->getPageNumber() << std::endl;
			}
		}
	}

}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any LibraryImpl::get(std::shared_ptr<uml::Property> _property) const
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string, std::function<Any()>>::const_iterator iter = m_getterMap.find(qName);
    if(iter != m_getterMap.cend())
    {
        //invoke the getter function
        return iter->second();
    }
	return eAny(nullptr);
}

void LibraryImpl::set(std::shared_ptr<uml::Property> _property, Any value)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string, std::function<void(Any)>>::iterator iter = m_setterMap.find(qName);
    if(iter != m_setterMap.end())
    {
        //invoke the getter function
        iter->second(value);
    }
}

void LibraryImpl::unset(std::shared_ptr<uml::Property> _property)
{
	//TODO: still two times run through map (contains and [])
	std::string qName = _property->getQualifiedName();
	std::map<std::string,std::function<void()>>::iterator iter = m_unsetterMap.find(qName);
    if(iter != m_unsetterMap.end())
    {
        //invoke the getter function
        iter->second();
    }
}


std::shared_ptr<Library> LibraryImpl::getThisLibraryPtr()
{
	return m_thisLibraryPtr.lock();
}
void LibraryImpl::setThisLibraryPtr(std::weak_ptr<Library> thisLibraryPtr)
{
	m_thisLibraryPtr = thisLibraryPtr;
	setThisClassPtr(thisLibraryPtr);
}