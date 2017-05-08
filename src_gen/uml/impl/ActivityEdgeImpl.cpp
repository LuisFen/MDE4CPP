#include "ActivityEdgeImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ActivityEdgeImpl::ActivityEdgeImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
	
	m_inGroup.reset(new std::vector<std::shared_ptr<uml::ActivityGroup>>());
	m_inPartition.reset(new std::vector<std::shared_ptr<uml::ActivityPartition>>());
	
	
	m_redefinedEdge.reset(new std::vector<std::shared_ptr<uml::ActivityEdge>>());
	
	
	
}

ActivityEdgeImpl::~ActivityEdgeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ActivityEdge "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ActivityEdgeImpl::ActivityEdgeImpl(const ActivityEdgeImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	m_interrupts  = obj.getInterrupts();

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _redefinedEdge = obj.getRedefinedEdge();
	this->getRedefinedEdge()->insert(this->getRedefinedEdge()->end(), _redefinedEdge->begin(), _redefinedEdge->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_source  = obj.getSource();

	m_target  = obj.getTarget();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	if(obj.getGuard()!=nullptr)
	{
		m_guard.reset(dynamic_cast<uml::ValueSpecification*>(obj.getGuard()->copy()));
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
	if(obj.getWeight()!=nullptr)
	{
		m_weight.reset(dynamic_cast<uml::ValueSpecification*>(obj.getWeight()->copy()));
	}
}

ecore::EObject *  ActivityEdgeImpl::copy() const
{
	return new ActivityEdgeImpl(*this);
}

std::shared_ptr<ecore::EClass> ActivityEdgeImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getActivityEdge();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool ActivityEdgeImpl::source_and_target(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::Activity> ActivityEdgeImpl::getActivity() const
{

    return m_activity;
}
void ActivityEdgeImpl::setActivity(std::shared_ptr<uml::Activity> _activity)
{
    m_activity = _activity;
}

std::shared_ptr<uml::ValueSpecification> ActivityEdgeImpl::getGuard() const
{

    return m_guard;
}
void ActivityEdgeImpl::setGuard(std::shared_ptr<uml::ValueSpecification> _guard)
{
    m_guard = _guard;
}




std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> ActivityEdgeImpl::getInPartition() const
{

    return m_inPartition;
}


std::shared_ptr<uml::StructuredActivityNode> ActivityEdgeImpl::getInStructuredNode() const
{

    return m_inStructuredNode;
}
void ActivityEdgeImpl::setInStructuredNode(std::shared_ptr<uml::StructuredActivityNode> _inStructuredNode)
{
    m_inStructuredNode = _inStructuredNode;
}

std::shared_ptr<uml::InterruptibleActivityRegion> ActivityEdgeImpl::getInterrupts() const
{

    return m_interrupts;
}
void ActivityEdgeImpl::setInterrupts(std::shared_ptr<uml::InterruptibleActivityRegion> _interrupts)
{
    m_interrupts = _interrupts;
}

std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> ActivityEdgeImpl::getRedefinedEdge() const
{

    return m_redefinedEdge;
}


std::shared_ptr<uml::ActivityNode> ActivityEdgeImpl::getSource() const
{
//assert(m_source);
    return m_source;
}
void ActivityEdgeImpl::setSource(std::shared_ptr<uml::ActivityNode> _source)
{
    m_source = _source;
}

std::shared_ptr<uml::ActivityNode> ActivityEdgeImpl::getTarget() const
{
//assert(m_target);
    return m_target;
}
void ActivityEdgeImpl::setTarget(std::shared_ptr<uml::ActivityNode> _target)
{
    m_target = _target;
}

std::shared_ptr<uml::ValueSpecification> ActivityEdgeImpl::getWeight() const
{

    return m_weight;
}
void ActivityEdgeImpl::setWeight(std::shared_ptr<uml::ValueSpecification> _weight)
{
    m_weight = _weight;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> ActivityEdgeImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> ActivityEdgeImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> redefinedEdge = getRedefinedEdge();
	_redefinedElement->insert(_redefinedElement->end(), redefinedEdge->begin(), redefinedEdge->end());

	return _redefinedElement;
}
std::shared_ptr<uml::Element> ActivityEdgeImpl::getOwner() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ActivityEdgeImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_ownedElement->push_back(getGuard());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	_ownedElement->push_back(getWeight());

	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActivityEdgeImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYEDGE_ACTIVITY:
			return getActivity(); //10813
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1084
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1080
		case UmlPackage::ACTIVITYEDGE_GUARD:
			return getGuard(); //10814
		case UmlPackage::ACTIVITYEDGE_INGROUP:
			return getInGroup(); //10822
		case UmlPackage::ACTIVITYEDGE_INPARTITION:
			return getInPartition(); //10815
		case UmlPackage::ACTIVITYEDGE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //10817
		case UmlPackage::ACTIVITYEDGE_INTERRUPTS:
			return getInterrupts(); //10816
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //10810
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1085
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1086
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1087
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1081
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1082
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1083
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1088
		case UmlPackage::ACTIVITYEDGE_REDEFINEDEDGE:
			return getRedefinedEdge(); //10820
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //10811
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //10812
		case UmlPackage::ACTIVITYEDGE_SOURCE:
			return getSource(); //10819
		case UmlPackage::ACTIVITYEDGE_TARGET:
			return getTarget(); //10818
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1089
		case UmlPackage::ACTIVITYEDGE_WEIGHT:
			return getWeight(); //10821
	}
	return boost::any();
}