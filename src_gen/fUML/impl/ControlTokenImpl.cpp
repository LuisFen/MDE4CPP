#include "ControlTokenImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "FUMLPackageImpl.hpp"
#include "FUMLFactory.hpp"

//Forward declaration includes
#include "ActivityNodeActivation.hpp"

#include "Token.hpp"

#include "Value.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ControlTokenImpl::ControlTokenImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

ControlTokenImpl::~ControlTokenImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ControlToken "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}




ControlTokenImpl::ControlTokenImpl(const ControlTokenImpl & obj):ControlTokenImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ControlToken "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_withdrawn = obj.isWithdrawn();

	//copy references with no containment (soft copy)
	
	m_holder  = obj.getHolder();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  ControlTokenImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ControlTokenImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ControlTokenImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getControlToken();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool ControlTokenImpl::equals(std::shared_ptr<fUML::Token>  other) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return (std::dynamic_pointer_cast<ControlToken>(other) != nullptr);
	//end of body
}

std::shared_ptr<fUML::Value> ControlTokenImpl::getValue()  const 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return nullptr;
	//end of body
}

bool ControlTokenImpl::isControl() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
		return true;
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ControlTokenImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::TOKEN_HOLDER:
			return getHolder(); //560
		case FUMLPackage::TOKEN_WITHDRAWN:
			return isWithdrawn(); //561
	}
	return boost::any();
}
