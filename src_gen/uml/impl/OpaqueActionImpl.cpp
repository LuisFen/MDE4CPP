#include "OpaqueActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
OpaqueActionImpl::OpaqueActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	m_body.reset(new std::vector<std::string>());
	m_language.reset(new std::vector<std::string>());
	//*********************************
	// Reference Members
	//*********************************
	m_inputValue.reset(new std::vector<std::shared_ptr<uml::InputPin>>());
	m_outputValue.reset(new std::vector<std::shared_ptr<uml::OutputPin>>());
}

OpaqueActionImpl::~OpaqueActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete OpaqueAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

OpaqueActionImpl::OpaqueActionImpl(const OpaqueActionImpl & obj)
{
	//create copy of all Attributes
	m_body = obj.getBody();
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_language = obj.getLanguage();
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
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _inputValueList = obj.getInputValue();
	for(std::shared_ptr<uml::InputPin> _inputValue : *_inputValueList)
	{
		this->getInputValue()->push_back(std::shared_ptr<uml::InputPin>(dynamic_cast<uml::InputPin*>(_inputValue->copy())));
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
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _outputValueList = obj.getOutputValue();
	for(std::shared_ptr<uml::OutputPin> _outputValue : *_outputValueList)
	{
		this->getOutputValue()->push_back(std::shared_ptr<uml::OutputPin>(dynamic_cast<uml::OutputPin*>(_outputValue->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  OpaqueActionImpl::copy() const
{
	return new OpaqueActionImpl(*this);
}

std::shared_ptr<ecore::EClass> OpaqueActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getOpaqueAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************


std::shared_ptr<std::vector<std::string>> OpaqueActionImpl::getBody() const 
{
	return m_body;
}



std::shared_ptr<std::vector<std::string>> OpaqueActionImpl::getLanguage() const 
{
	return m_language;
}

//*********************************
// Operations
//*********************************
bool OpaqueActionImpl::language_body_size(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> OpaqueActionImpl::getInputValue() const
{

    return m_inputValue;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> OpaqueActionImpl::getOutputValue() const
{

    return m_outputValue;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> OpaqueActionImpl::getInput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input(new std::vector<std::shared_ptr<uml::InputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> inputValue = getInputValue();
	_input->insert(_input->end(), inputValue->begin(), inputValue->end());

	return _input;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> OpaqueActionImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> redefinedNode = getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());

	return _redefinedElement;
}
std::shared_ptr<uml::Element> OpaqueActionImpl::getOwner() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> OpaqueActionImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> inInterruptibleRegion = getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> OpaqueActionImpl::getOwnedElement() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> OpaqueActionImpl::getOutput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output(new std::vector<std::shared_ptr<uml::OutputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> outputValue = getOutputValue();
	_output->insert(_output->end(), outputValue->begin(), outputValue->end());

	return _output;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any OpaqueActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //15713
		case UmlPackage::OPAQUEACTION_BODY:
			return getBody(); //15728
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1574
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //15722
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1570
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //15721
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //15714
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //15715
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //15720
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //15716
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //15717
		case UmlPackage::ACTION_INPUT:
			return getInput(); //15723
		case UmlPackage::OPAQUEACTION_INPUTVALUE:
			return getInputValue(); //15729
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //15710
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //15724
		case UmlPackage::OPAQUEACTION_LANGUAGE:
			return getLanguage(); //15730
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //15725
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //15726
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1575
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1576
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1577
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //15718
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //15727
		case UmlPackage::OPAQUEACTION_OUTPUTVALUE:
			return getOutputValue(); //15731
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1571
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1572
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1573
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1578
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //15711
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //15719
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //15712
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1579
	}
	return boost::any();
}