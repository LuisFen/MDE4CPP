#include "ArtifactImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ArtifactImpl::ArtifactImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	m_manifestation.reset(new std::vector<std::shared_ptr<uml::Manifestation>>());
	m_nestedArtifact.reset(new std::vector<std::shared_ptr<uml::Artifact>>());
	m_ownedAttribute.reset(new std::vector<std::shared_ptr<uml::Property>>());
	m_ownedOperation.reset(new std::vector<std::shared_ptr<uml::Operation>>());
}

ArtifactImpl::~ArtifactImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Artifact "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ArtifactImpl::ArtifactImpl(const ArtifactImpl & obj)
{
	//create copy of all Attributes
	m_fileName = obj.getFileName();
	m_isAbstract = obj.getIsAbstract();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute = obj.getAttribute();
	this->getAttribute()->insert(this->getAttribute()->end(), _attribute->begin(), _attribute->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

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

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralizationSet>>> _powertypeExtent = obj.getPowertypeExtent();
	this->getPowertypeExtent()->insert(this->getPowertypeExtent()->end(), _powertypeExtent->begin(), _powertypeExtent->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinedClassifier = obj.getRedefinedClassifier();
	this->getRedefinedClassifier()->insert(this->getRedefinedClassifier()->end(), _redefinedClassifier->begin(), _redefinedClassifier->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_representation  = obj.getRepresentation();

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
	std::shared_ptr<std::vector<std::shared_ptr<uml::Manifestation>>> _manifestationList = obj.getManifestation();
	for(std::shared_ptr<uml::Manifestation> _manifestation : *_manifestationList)
	{
		this->getManifestation()->push_back(std::shared_ptr<uml::Manifestation>(dynamic_cast<uml::Manifestation*>(_manifestation->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Artifact>>> _nestedArtifactList = obj.getNestedArtifact();
	for(std::shared_ptr<uml::Artifact> _nestedArtifact : *_nestedArtifactList)
	{
		this->getNestedArtifact()->push_back(std::shared_ptr<uml::Artifact>(dynamic_cast<uml::Artifact*>(_nestedArtifact->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _ownedAttributeList = obj.getOwnedAttribute();
	for(std::shared_ptr<uml::Property> _ownedAttribute : *_ownedAttributeList)
	{
		this->getOwnedAttribute()->push_back(std::shared_ptr<uml::Property>(dynamic_cast<uml::Property*>(_ownedAttribute->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> _ownedOperationList = obj.getOwnedOperation();
	for(std::shared_ptr<uml::Operation> _ownedOperation : *_ownedOperationList)
	{
		this->getOwnedOperation()->push_back(std::shared_ptr<uml::Operation>(dynamic_cast<uml::Operation*>(_ownedOperation->copy())));
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

ecore::EObject *  ArtifactImpl::copy() const
{
	return new ArtifactImpl(*this);
}

std::shared_ptr<ecore::EClass> ArtifactImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getArtifact();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ArtifactImpl::setFileName (std::string _fileName)
{
	m_fileName = _fileName;
} 

std::string ArtifactImpl::getFileName() const 
{
	return m_fileName;
}

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::Property>  ArtifactImpl::createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Operation>  ArtifactImpl::createOwnedOperation(std::string name,std::shared_ptr<std::vector<std::shared_ptr<std::string>>>  parameterNames,std::shared_ptr<std::vector<std::shared_ptr<uml::Type>>>  parameterTypes,std::shared_ptr<uml::Type>  returnType) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Manifestation>>> ArtifactImpl::getManifestation() const
{

    return m_manifestation;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Artifact>>> ArtifactImpl::getNestedArtifact() const
{

    return m_nestedArtifact;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ArtifactImpl::getOwnedAttribute() const
{

    return m_ownedAttribute;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ArtifactImpl::getOwnedOperation() const
{

    return m_ownedOperation;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element> ArtifactImpl::getOwner() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> ArtifactImpl::getFeature() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> _feature(new std::vector<std::shared_ptr<uml::Feature>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> attribute = getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ownedOperation = getOwnedOperation();
	_feature->insert(_feature->end(), ownedOperation->begin(), ownedOperation->end());

	return _feature;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ArtifactImpl::getMember() const
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

	return _member;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ArtifactImpl::getOwnedMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Artifact>>> nestedArtifact = getNestedArtifact();
	_ownedMember->insert(_ownedMember->end(), nestedArtifact->begin(), nestedArtifact->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_ownedMember->insert(_ownedMember->end(), ownedAttribute->begin(), ownedAttribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> ownedOperation = getOwnedOperation();
	_ownedMember->insert(_ownedMember->end(), ownedOperation->begin(), ownedOperation->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> ownedRule = getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> ownedUseCase = getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());

	return _ownedMember;
}
std::shared_ptr<uml::Namespace> ArtifactImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ArtifactImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::CollaborationUse>>> collaborationUse = getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> elementImport = getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Generalization>>> generalization = getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Manifestation>>> manifestation = getManifestation();
	_ownedElement->insert(_ownedElement->end(), manifestation->begin(), manifestation->end());
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
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> ArtifactImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> redefinedClassifier = getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ArtifactImpl::getAttribute() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute(new std::vector<std::shared_ptr<uml::Property>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_attribute->insert(_attribute->end(), ownedAttribute->begin(), ownedAttribute->end());

	return _attribute;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ArtifactImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //3925
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //394
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //3926
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //390
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //3911
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //3924
		case UmlPackage::ARTIFACT_FILENAME:
			return getFileName(); //3938
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //3927
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //3928
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //3914
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //3930
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //3931
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //3932
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //3910
		case UmlPackage::ARTIFACT_MANIFESTATION:
			return getManifestation(); //3939
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //3915
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //395
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //396
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //397
		case UmlPackage::ARTIFACT_NESTEDARTIFACT:
			return getNestedArtifact(); //3940
		case UmlPackage::ARTIFACT_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //3941
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //391
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //392
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //3913
		case UmlPackage::ARTIFACT_OWNEDOPERATION:
			return getOwnedOperation(); //3942
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //3910
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //395
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //3933
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //393
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //394
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //3912
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //3912
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //3929
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //398
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //3935
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //3911
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //3912
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //3936
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //3937
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //394
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //395
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //3934
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //399
	}
	return boost::any();
}