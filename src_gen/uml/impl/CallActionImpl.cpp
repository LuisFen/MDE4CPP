#include "CallActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CallActionImpl::CallActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	m_result.reset(new std::vector<std::shared_ptr<uml::OutputPin>>());
}

CallActionImpl::~CallActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CallAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

CallActionImpl::CallActionImpl(const CallActionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_isSynchronous = obj.getIsSynchronous();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_context  = obj.getContext();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> _inInterruptibleRegion = obj.getInInterruptibleRegion();
	this->getInInterruptibleRegion()->insert(this->getInInterruptibleRegion()->end(), _inInterruptibleRegion->begin(), _inInterruptibleRegion->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _incoming = obj.getIncoming();
	this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input = obj.getInput();
	this->getInput()->insert(this->getInput()->end(), _input->begin(), _input->end());

	m_namespace  = obj.getNamespace();

	m_onPort  = obj.getOnPort();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _outgoing = obj.getOutgoing();
	this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output = obj.getOutput();
	this->getOutput()->insert(this->getOutput()->end(), _output->begin(), _output->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _redefinedNode = obj.getRedefinedNode();
	this->getRedefinedNode()->insert(this->getRedefinedNode()->end(), _redefinedNode->begin(), _redefinedNode->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _argumentList = obj.getArgument();
	for(std::shared_ptr<uml::InputPin> _argument : *_argumentList)
	{
		this->getArgument()->push_back(std::shared_ptr<uml::InputPin>(dynamic_cast<uml::InputPin*>(_argument->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->push_back(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _resultList = obj.getResult();
	for(std::shared_ptr<uml::OutputPin> _result : *_resultList)
	{
		this->getResult()->push_back(std::shared_ptr<uml::OutputPin>(dynamic_cast<uml::OutputPin*>(_result->copy())));
	}
}

ecore::EObject *  CallActionImpl::copy() const
{
	return new CallActionImpl(*this);
}

std::shared_ptr<ecore::EClass> CallActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCallAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void CallActionImpl::setIsSynchronous (bool _isSynchronous)
{
	m_isSynchronous = _isSynchronous;
} 

bool CallActionImpl::getIsSynchronous() const 
{
	return m_isSynchronous;
}

//*********************************
// Operations
//*********************************
bool CallActionImpl::argument_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Parameter>>> CallActionImpl::inputParameters() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Parameter>>> CallActionImpl::outputParameters() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool CallActionImpl::result_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool CallActionImpl::synchronous_call(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> CallActionImpl::getResult() const
{

    return m_result;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> CallActionImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> handler = getHandler();
	_ownedElement->insert(_ownedElement->end(), handler->begin(), handler->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> input = getInput();
	_ownedElement->insert(_ownedElement->end(), input->begin(), input->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPostcondition = getLocalPostcondition();
	_ownedElement->insert(_ownedElement->end(), localPostcondition->begin(), localPostcondition->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPrecondition = getLocalPrecondition();
	_ownedElement->insert(_ownedElement->end(), localPrecondition->begin(), localPrecondition->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> output = getOutput();
	_ownedElement->insert(_ownedElement->end(), output->begin(), output->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}
std::shared_ptr<uml::Element> CallActionImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getActivity()!=nullptr)
	{
		_owner = getActivity();
	}
	if(getInStructuredNode()!=nullptr)
	{
		_owner = getInStructuredNode();
	}
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> CallActionImpl::getInput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input(new std::vector<std::shared_ptr<uml::InputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> argument = getArgument();
	_input->insert(_input->end(), argument->begin(), argument->end());

	return _input;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> CallActionImpl::getOutput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output(new std::vector<std::shared_ptr<uml::OutputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> result = getResult();
	_output->insert(_output->end(), result->begin(), result->end());

	return _output;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> CallActionImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> redefinedNode = getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> CallActionImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> inInterruptibleRegion = getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CallActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //13913
		case UmlPackage::INVOCATIONACTION_ARGUMENT:
			return getArgument(); //13928
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1394
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //13922
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1390
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //13921
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //13914
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //13915
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //13920
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //13916
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //13917
		case UmlPackage::ACTION_INPUT:
			return getInput(); //13923
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //13910
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //13924
		case UmlPackage::CALLACTION_ISSYNCHRONOUS:
			return getIsSynchronous(); //13930
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //13925
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //13926
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1395
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1396
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1397
		case UmlPackage::INVOCATIONACTION_ONPORT:
			return getOnPort(); //13929
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //13918
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //13927
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1391
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1392
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1393
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1398
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //13911
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //13919
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //13912
		case UmlPackage::CALLACTION_RESULT:
			return getResult(); //13931
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1399
	}
	return boost::any();
}