//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP
#define UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TestIdentityAction.hpp"

#include "impl/ActionImpl.hpp"



//*********************************
namespace uml 
{
	class TestIdentityActionImpl :virtual public ActionImpl, virtual public TestIdentityAction 
	{
		public: 
			TestIdentityActionImpl(const TestIdentityActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TestIdentityActionImpl& operator=(TestIdentityActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TestIdentityActionImpl();

		public:
			//destructor
			virtual ~TestIdentityActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the InputPins is 1..1.
			first.is(1,1) and second.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The InputPins have no type.
			first.type= null and second.type = null */ 
			virtual bool no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The type of the result OutputPin is Boolean.
			result.type=Boolean */ 
			virtual bool result_is_boolean(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin> getFirst() const ;
			
			/*!
			 The InputPin on which the first input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setFirst(std::shared_ptr<uml::InputPin> _first) ;
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin> getResult() const ;
			
			/*!
			 The OutputPin whose Boolean value indicates whether the two input objects are identical.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result) ;
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin> getSecond() const ;
			
			/*!
			 The OutputPin on which the second input object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setSecond(std::shared_ptr<uml::InputPin> _second) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_TESTIDENTITYACTIONTESTIDENTITYACTIONIMPL_HPP */
