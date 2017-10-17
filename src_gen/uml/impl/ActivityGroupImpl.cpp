#include "ActivityGroupImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Activity.hpp"

#include "ActivityContent.hpp"

#include "ActivityEdge.hpp"

#include "ActivityGroup.hpp"

#include "ActivityNode.hpp"

#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "StringExpression.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ActivityGroupImpl::ActivityGroupImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		/*Union*/
		m_containedEdge.reset(new Union<uml::ActivityEdge>());
			#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising Union: " << "m_containedEdge - Union<uml::ActivityEdge>()" << std::endl;
		#endif
	
	

		/*Union*/
		m_containedNode.reset(new Union<uml::ActivityNode>());
			#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising Union: " << "m_containedNode - Union<uml::ActivityNode>()" << std::endl;
		#endif
	
	

	

		/*SubsetUnion*/
		m_subgroup.reset(new SubsetUnion<uml::ActivityGroup, uml::Element >());
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising shared pointer SubsetUnion: " << "m_subgroup - SubsetUnion<uml::ActivityGroup, uml::Element >()" << std::endl;
		#endif
	
	

	

	//Init references
	
	

	
	

	

		/*SubsetUnion*/
		m_subgroup->initSubsetUnion(m_ownedElement);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value SubsetUnion: " << "m_subgroup - SubsetUnion<uml::ActivityGroup, uml::Element >(m_ownedElement)" << std::endl;
		#endif
	
	

	
}

ActivityGroupImpl::~ActivityGroupImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ActivityGroup "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			ActivityGroupImpl::ActivityGroupImpl(std::weak_ptr<uml::Activity > par_inActivity)
			:ActivityGroupImpl()
			{
			    m_inActivity = par_inActivity;
			}





//Additional constructor for the containments back reference
			ActivityGroupImpl::ActivityGroupImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:ActivityGroupImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			ActivityGroupImpl::ActivityGroupImpl(std::weak_ptr<uml::Element > par_owner)
			:ActivityGroupImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			ActivityGroupImpl::ActivityGroupImpl(std::weak_ptr<uml::ActivityGroup > par_superGroup)
			:ActivityGroupImpl()
			{
			    m_superGroup = par_superGroup;
			}






ActivityGroupImpl::ActivityGroupImpl(const ActivityGroupImpl & obj):ActivityGroupImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ActivityGroup "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr<Union<uml::ActivityEdge> > _containedEdge = obj.getContainedEdge();
	m_containedEdge.reset(new Union<uml::ActivityEdge>(*(obj.getContainedEdge().get())));

	std::shared_ptr<Union<uml::ActivityNode> > _containedNode = obj.getContainedNode();
	m_containedNode.reset(new Union<uml::ActivityNode>(*(obj.getContainedNode().get())));

	m_inActivity  = obj.getInActivity();

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_superGroup  = obj.getSuperGroup();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  ActivityGroupImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ActivityGroupImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ActivityGroupImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getActivityGroup();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool ActivityGroupImpl::nodes_and_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ActivityGroupImpl::not_contained(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************






std::weak_ptr<uml::Activity > ActivityGroupImpl::getInActivity() const
{

    return m_inActivity;
}
void ActivityGroupImpl::setInActivity(std::shared_ptr<uml::Activity> _inActivity)
{
    m_inActivity = _inActivity;
}







//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::ActivityEdge> > ActivityGroupImpl::getContainedEdge() const
{
	return m_containedEdge;
}
std::shared_ptr<Union<uml::ActivityNode> > ActivityGroupImpl::getContainedNode() const
{
	return m_containedNode;
}
std::shared_ptr<Union<uml::Element> > ActivityGroupImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > ActivityGroupImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<SubsetUnion<uml::ActivityGroup, uml::Element > > ActivityGroupImpl::getSubgroup() const
{
	return m_subgroup;
}
std::weak_ptr<uml::ActivityGroup > ActivityGroupImpl::getSuperGroup() const
{
	return m_superGroup;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActivityGroupImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1074
		case UmlPackage::ACTIVITYGROUP_CONTAINEDEDGE:
			return getContainedEdge(); //10710
		case UmlPackage::ACTIVITYGROUP_CONTAINEDNODE:
			return getContainedNode(); //10711
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1070
		case UmlPackage::ACTIVITYGROUP_INACTIVITY:
			return getInActivity(); //10712
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1075
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1076
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1077
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1071
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1072
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1073
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1078
		case UmlPackage::ACTIVITYGROUP_SUBGROUP:
			return getSubgroup(); //10713
		case UmlPackage::ACTIVITYGROUP_SUPERGROUP:
			return getSuperGroup(); //10714
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1079
	}
	return boost::any();
}
