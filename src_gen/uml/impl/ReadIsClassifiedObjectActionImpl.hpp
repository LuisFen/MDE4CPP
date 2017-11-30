//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READISCLASSIFIEDOBJECTACTIONREADISCLASSIFIEDOBJECTACTIONIMPL_HPP
#define UML_READISCLASSIFIEDOBJECTACTIONREADISCLASSIFIEDOBJECTACTIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../ReadIsClassifiedObjectAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ReadIsClassifiedObjectActionImpl :virtual public ActionImpl, virtual public ReadIsClassifiedObjectAction 
	{
		public: 
			ReadIsClassifiedObjectActionImpl(const ReadIsClassifiedObjectActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadIsClassifiedObjectActionImpl& operator=(ReadIsClassifiedObjectActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReadIsClassifiedObjectActionImpl();

			//Additional constructors for the containments back reference
			ReadIsClassifiedObjectActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ReadIsClassifiedObjectActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ReadIsClassifiedObjectActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ReadIsClassifiedObjectActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ReadIsClassifiedObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The type of the result OutputPin is Boolean.
			result.type = Boolean */ 
			virtual bool boolean_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity_of_input(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The multiplicity of the result OutputPin is 1..1.
			result.is(1,1) */ 
			virtual bool multiplicity_of_output(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The object InputPin has no type.
			object.type = null */ 
			virtual bool no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the input object must be directly classified by the given Classifier or whether it may also be an instance of a specialization of the given Classifier.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDirect() const ;
			
			/*!
			 Indicates whether the input object must be directly classified by the given Classifier or whether it may also be an instance of a specialization of the given Classifier.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDirect (bool _isDirect); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifier against which the classification of the input object is tested.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Classifier > getClassifier() const ;
			
			/*!
			 The Classifier against which the classification of the input object is tested.
			<p>From package UML::Actions.</p> */
			virtual void setClassifier(std::shared_ptr<uml::Classifier> _classifier_classifier) ;
			/*!
			 The InputPin that holds the object whose classification is to be tested.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const ;
			
			/*!
			 The InputPin that holds the object whose classification is to be tested.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) ;
			/*!
			 The OutputPin that holds the Boolean result of the test.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const ;
			
			/*!
			 The OutputPin that holds the Boolean result of the test.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_READISCLASSIFIEDOBJECTACTIONREADISCLASSIFIEDOBJECTACTIONIMPL_HPP */

