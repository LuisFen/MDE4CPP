#include "ClassImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ClassImpl::ClassImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	m_extension.reset(new std::vector<std::shared_ptr<uml::Extension>>());
	m_nestedClassifier.reset(new std::vector<std::shared_ptr<uml::Classifier>>());
	m_ownedOperation.reset(new std::vector<std::shared_ptr<uml::Operation>>());
	m_ownedReception.reset(new std::vector<std::shared_ptr<uml::Reception>>());
	m_superClass.reset(new std::vector<std::shared_ptr<uml::Class>>());
}

ClassImpl::~ClassImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Class "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ClassImpl::ClassImpl(const ClassImpl & obj)
{
	//create copy of all Attributes
	m_isAbstract = obj.getIsAbstract();
	m_isActive = obj.getIsActive();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute = obj.getAttribute();
	this->getAttribute()->insert(this->getAttribute()->end(), _attribute->begin(), _attribute->end());

	m_classifierBehavior  = obj.getClassifierBehavior();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Extension>>> _extension = obj.getExtension();
	this->getExtension()->insert(this->getExtension()->end(), _extension->begin(), _extension->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> _feature = obj.getFeature();
	this->getFeature()->insert(this->getFeature()->end(), _feature->begin(), _feature->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _general = obj.getGeneral();
	this->getGeneral()->insert(this->getGeneral()->end(), _general->begin(), _general->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _inheritedMember = obj.getInheritedMember();
	this->getInheritedMember()->insert(this->getInheritedMember()->end(), _inheritedMember->begin(), _inheritedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Port>>> _ownedPort = obj.getOwnedPort();
	this->getOwnedPort()->insert(this->getOwnedPort()->end(), _ownedPort->begin(), _ownedPort->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _part = obj.getPart();
	this->getPart()->insert(this->getPart()->end(), _part->begin(), _part->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralizationSet>>> _powertypeExtent = obj.getPowertypeExtent();
	this->getPowertypeExtent()->insert(this->getPowertypeExtent()->end(), _powertypeExtent->begin(), _powertypeExtent->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinedClassifier = obj.getRedefinedClassifier();
	this->getRedefinedClassifier()->insert(this->getRedefinedClassifier()->end(), _redefinedClassifier->begin(), _redefinedClassifier->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_representation  = obj.getRepresentation();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> _role = obj.getRole();
	this->getRole()->insert(this->getRole()->end(), _role->begin(), _role->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>> _superClass = obj.getSuperClass();
	this->getSuperClass()->insert(this->getSuperClass()->end(), _superClass->begin(), _superClass->end());

	m_templateParameter  = obj.getTemplateParameter();

	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> _useCase = obj.getUseCase();
	this->getUseCase()->insert(this->getUseCase()->end(), _useCase->begin(), _useCase->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<uml::CollaborationUse>>> _collaborationUseList = obj.getCollaborationUse();
	for(std::shared_ptr<uml::CollaborationUse> _collaborationUse : *_collaborationUseList)
	{
		this->getCollaborationUse()->push_back(std::shared_ptr<uml::CollaborationUse>(dynamic_cast<uml::CollaborationUse*>(_collaborationUse->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> _elementImportList = obj.getElementImport();
	for(std::shared_ptr<uml::ElementImport> _elementImport : *_elementImportList)
	{
		this->getElementImport()->push_back(std::shared_ptr<uml::ElementImport>(dynamic_cast<uml::ElementImport*>(_elementImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Generalization>>> _generalizationList = obj.getGeneralization();
	for(std::shared_ptr<uml::Generalization> _generalization : *_generalizationList)
	{
		this->getGeneralization()->push_back(std::shared_ptr<uml::Generalization>(dynamic_cast<uml::Generalization*>(_generalization->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterfaceRealization>>> _interfaceRealizationList = obj.getInterfaceRealization();
	for(std::shared_ptr<uml::InterfaceRealization> _interfaceRealization : *_interfaceRealizationList)
	{
		this->getInterfaceRealization()->push_back(std::shared_ptr<uml::InterfaceRealization>(dynamic_cast<uml::InterfaceRealization*>(_interfaceRealization->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _nestedClassifierList = obj.getNestedClassifier();
	for(std::shared_ptr<uml::Classifier> _nestedClassifier : *_nestedClassifierList)
	{
		this->getNestedClassifier()->push_back(std::shared_ptr<uml::Classifier>(dynamic_cast<uml::Classifier*>(_nestedClassifier->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _ownedAttributeList = obj.getOwnedAttribute();
	for(std::shared_ptr<uml::Property> _ownedAttribute : *_ownedAttributeList)
	{
		this->getOwnedAttribute()->push_back(std::shared_ptr<uml::Property>(dynamic_cast<uml::Property*>(_ownedAttribute->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Behavior>>> _ownedBehaviorList = obj.getOwnedBehavior();
	for(std::shared_ptr<uml::Behavior> _ownedBehavior : *_ownedBehaviorList)
	{
		this->getOwnedBehavior()->push_back(std::shared_ptr<uml::Behavior>(dynamic_cast<uml::Behavior*>(_ownedBehavior->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> _ownedConnectorList = obj.getOwnedConnector();
	for(std::shared_ptr<uml::Connector> _ownedConnector : *_ownedConnectorList)
	{
		this->getOwnedConnector()->push_back(std::shared_ptr<uml::Connector>(dynamic_cast<uml::Connector*>(_ownedConnector->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> _ownedOperationList = obj.getOwnedOperation();
	for(std::shared_ptr<uml::Operation> _ownedOperation : *_ownedOperationList)
	{
		this->getOwnedOperation()->push_back(std::shared_ptr<uml::Operation>(dynamic_cast<uml::Operation*>(_ownedOperation->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Reception>>> _ownedReceptionList = obj.getOwnedReception();
	for(std::shared_ptr<uml::Reception> _ownedReception : *_ownedReceptionList)
	{
		this->getOwnedReception()->push_back(std::shared_ptr<uml::Reception>(dynamic_cast<uml::Reception*>(_ownedReception->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _ownedRuleList = obj.getOwnedRule();
	for(std::shared_ptr<uml::Constraint> _ownedRule : *_ownedRuleList)
	{
		this->getOwnedRule()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_ownedRule->copy())));
	}
	if(obj.getOwnedTemplateSignature()!=nullptr)
	{
		m_ownedTemplateSignature.reset(dynamic_cast<uml::TemplateSignature*>(obj.getOwnedTemplateSignature()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> _ownedUseCaseList = obj.getOwnedUseCase();
	for(std::shared_ptr<uml::UseCase> _ownedUseCase : *_ownedUseCaseList)
	{
		this->getOwnedUseCase()->push_back(std::shared_ptr<uml::UseCase>(dynamic_cast<uml::UseCase*>(_ownedUseCase->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> _packageImportList = obj.getPackageImport();
	for(std::shared_ptr<uml::PackageImport> _packageImport : *_packageImportList)
	{
		this->getPackageImport()->push_back(std::shared_ptr<uml::PackageImport>(dynamic_cast<uml::PackageImport*>(_packageImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Substitution>>> _substitutionList = obj.getSubstitution();
	for(std::shared_ptr<uml::Substitution> _substitution : *_substitutionList)
	{
		this->getSubstitution()->push_back(std::shared_ptr<uml::Substitution>(dynamic_cast<uml::Substitution*>(_substitution->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> _templateBindingList = obj.getTemplateBinding();
	for(std::shared_ptr<uml::TemplateBinding> _templateBinding : *_templateBindingList)
	{
		this->getTemplateBinding()->push_back(std::shared_ptr<uml::TemplateBinding>(dynamic_cast<uml::TemplateBinding*>(_templateBinding->copy())));
	}
}

ecore::EObject *  ClassImpl::copy() const
{
	return new ClassImpl(*this);
}

std::shared_ptr<ecore::EClass> ClassImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getClass();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ClassImpl::setIsActive (bool _isActive)
{
	m_isActive = _isActive;
} 

bool ClassImpl::getIsActive() const 
{
	return m_isActive;
}

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::Operation>  ClassImpl::createOwnedOperation(std::string name,std::shared_ptr<std::vector<std::shared_ptr<std::string>>>  parameterNames,std::shared_ptr<std::vector<std::shared_ptr<uml::Type>>>  parameterTypes,std::shared_ptr<uml::Type>  returnType) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Extension>>> ClassImpl::getExtensions() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>> ClassImpl::getSuperClasses() 
{
	//generated from body annotation
	std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>> superClass(new std::vector<std::shared_ptr<uml::Class>> () );	
	
    std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> classifierList = getGenerals();	
    for (std::shared_ptr<Classifier> c : *classifierList)	
    {	
    	std::shared_ptr<uml::Class> cl = std::dynamic_pointer_cast<uml::Class>(c);
        if(cl)
        {
            superClass->push_back(cl);
        }	
    }	
    return superClass;
}

bool ClassImpl::isMetaclass() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ClassImpl::passive_class(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Extension>>> ClassImpl::getExtension() const
{

    return m_extension;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> ClassImpl::getNestedClassifier() const
{

    return m_nestedClassifier;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ClassImpl::getOwnedOperation() const
{

    return m_ownedOperation;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Reception>>> ClassImpl::getOwnedReception() const
{

    return m_ownedReception;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>> ClassImpl::getSuperClass() const
{

    return m_superClass;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> ClassImpl::getRole() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> _role(new std::vector<std::shared_ptr<uml::ConnectableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_role->insert(_role->end(), ownedAttribute->begin(), ownedAttribute->end());

	return _role;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> ClassImpl::getFeature() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> _feature(new std::vector<std::shared_ptr<uml::Feature>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> attribute = getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> ownedConnector = getOwnedConnector();
	_feature->insert(_feature->end(), ownedConnector->begin(), ownedConnector->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ownedOperation = getOwnedOperation();
	_feature->insert(_feature->end(), ownedOperation->begin(), ownedOperation->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Reception>>> ownedReception = getOwnedReception();
	_feature->insert(_feature->end(), ownedReception->begin(), ownedReception->end());

	return _feature;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ClassImpl::getAttribute() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute(new std::vector<std::shared_ptr<uml::Property>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_attribute->insert(_attribute->end(), ownedAttribute->begin(), ownedAttribute->end());

	return _attribute;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ClassImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::CollaborationUse>>> collaborationUse = getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> elementImport = getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Generalization>>> generalization = getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterfaceRealization>>> interfaceRealization = getInterfaceRealization();
	_ownedElement->insert(_ownedElement->end(), interfaceRealization->begin(), interfaceRealization->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_ownedElement->insert(_ownedElement->end(), ownedMember->begin(), ownedMember->end());
	_ownedElement->push_back(getOwnedTemplateSignature());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> packageImport = getPackageImport();
	_ownedElement->insert(_ownedElement->end(), packageImport->begin(), packageImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Substitution>>> substitution = getSubstitution();
	_ownedElement->insert(_ownedElement->end(), substitution->begin(), substitution->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> templateBinding = getTemplateBinding();
	_ownedElement->insert(_ownedElement->end(), templateBinding->begin(), templateBinding->end());

	return _ownedElement;
}
std::shared_ptr<uml::Element> ClassImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}
	if(getOwningTemplateParameter()!=nullptr)
	{
		_owner = getOwningTemplateParameter();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ClassImpl::getOwnedMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> nestedClassifier = getNestedClassifier();
	_ownedMember->insert(_ownedMember->end(), nestedClassifier->begin(), nestedClassifier->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_ownedMember->insert(_ownedMember->end(), ownedAttribute->begin(), ownedAttribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Behavior>>> ownedBehavior = getOwnedBehavior();
	_ownedMember->insert(_ownedMember->end(), ownedBehavior->begin(), ownedBehavior->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> ownedConnector = getOwnedConnector();
	_ownedMember->insert(_ownedMember->end(), ownedConnector->begin(), ownedConnector->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ownedOperation = getOwnedOperation();
	_ownedMember->insert(_ownedMember->end(), ownedOperation->begin(), ownedOperation->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Reception>>> ownedReception = getOwnedReception();
	_ownedMember->insert(_ownedMember->end(), ownedReception->begin(), ownedReception->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> ownedRule = getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> ownedUseCase = getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());

	return _ownedMember;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> ClassImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> redefinedClassifier = getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ClassImpl::getMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> feature = getFeature();
	_member->insert(_member->end(), feature->begin(), feature->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> importedMember = getImportedMember();
	_member->insert(_member->end(), importedMember->begin(), importedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> inheritedMember = getInheritedMember();
	_member->insert(_member->end(), inheritedMember->begin(), inheritedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_member->insert(_member->end(), ownedMember->begin(), ownedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> role = getRole();
	_member->insert(_member->end(), role->begin(), role->end());

	return _member;
}
std::shared_ptr<uml::Namespace> ClassImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ClassImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //325
		case UmlPackage::BEHAVIOREDCLASSIFIER_CLASSIFIERBEHAVIOR:
			return getClassifierBehavior(); //338
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //34
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //326
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //30
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //311
		case UmlPackage::CLASS_EXTENSION:
			return getExtension(); //347
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //324
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //327
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //328
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //314
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //330
		case UmlPackage::BEHAVIOREDCLASSIFIER_INTERFACEREALIZATION:
			return getInterfaceRealization(); //339
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //331
		case UmlPackage::CLASS_ISACTIVE:
			return getIsActive(); //348
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //332
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //310
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //315
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //35
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //36
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //37
		case UmlPackage::CLASS_NESTEDCLASSIFIER:
			return getNestedClassifier(); //349
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //338
		case UmlPackage::BEHAVIOREDCLASSIFIER_OWNEDBEHAVIOR:
			return getOwnedBehavior(); //340
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //31
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDCONNECTOR:
			return getOwnedConnector(); //339
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //32
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //313
		case UmlPackage::CLASS_OWNEDOPERATION:
			return getOwnedOperation(); //346
		case UmlPackage::ENCAPSULATEDCLASSIFIER_OWNEDPORT:
			return getOwnedPort(); //342
		case UmlPackage::CLASS_OWNEDRECEPTION:
			return getOwnedReception(); //350
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //310
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //35
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //333
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //33
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //34
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //312
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //312
		case UmlPackage::STRUCTUREDCLASSIFIER_PART:
			return getPart(); //340
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //329
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //38
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //335
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //311
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //312
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //336
		case UmlPackage::STRUCTUREDCLASSIFIER_ROLE:
			return getRole(); //341
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //337
		case UmlPackage::CLASS_SUPERCLASS:
			return getSuperClass(); //351
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //34
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //35
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //334
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //39
	}
	return boost::any();
}