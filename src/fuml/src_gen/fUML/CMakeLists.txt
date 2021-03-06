#############################################################################
#																	        #
#		 			CMakeList created by ecore4CPP Generator				# 
#																	        #
#############################################################################

# C++ project of model fUML.ecore, generated by Ecore4CPP

CMAKE_MINIMUM_REQUIRED(VERSION 3.9)

PROJECT(fUML)

IF(NOT CMAKE_BUILD_TYPE) 
    SET(CMAKE_BUILD_TYPE Debug)
ENDIF(NOT CMAKE_BUILD_TYPE)
SET(CMAKE_DEBUG_POSTFIX d)

SET(CMAKE_CXX_STANDARD 14)

IF(("$ENV{DEBUG_MESSAGE_FUML}" EQUAL "1") AND (CMAKE_BUILD_TYPE MATCHES Debug))
	SET(ENABLED_DEBUG_MESSAGE " ")
ELSE()
	SET(ENABLED_DEBUG_MESSAGE " -DNDEBUG")
ENDIF()
IF("$ENV{DEBUG_MESSAGE_ACTIVITY_DEBUGGER}" EQUAL "1")
	SET(ENABLED_DEBUG_MESSAGE "${ENABLED_DEBUG_MESSAGE} -DACTIVITY_DEBUG_ON")
ENDIF()

SET(CMAKE_CXX_FLAGS "-Wall -Wno-overloaded-virtual -Wdeprecated-declarations -fmax-errors=5")
SET(CMAKE_CXX_FLAGS_DEBUG " -Og -ggdb ${ENABLED_DEBUG_MESSAGE}")
SET(CMAKE_CXX_FLAGS_RELEASE " -O3  ${ENABLED_DEBUG_MESSAGE}")

string(REPLACE "\\" "/" MDE4CPP_HOME $ENV{MDE4CPP_HOME})

SET(SOURCE_FILES
	impl/FUMLFactoryImpl.cpp
	FUMLFactory.cpp
	impl/FUMLPackageImpl.cpp
	impl/FUMLPackageImpl_Creation.cpp
	impl/FUMLPackageImpl_Initialization.cpp
	FUMLPackage.cpp
	impl/FUMLPluginImpl.cpp
	FUMLPlugin.cpp
	Semantics/Actions/impl/AcceptCallActionActivationImpl.cpp
	Semantics/Actions/impl/AcceptCallActionActivationsImpl.cpp
	Semantics/Actions/impl/AcceptEventActionActivationImpl.cpp
	Semantics/Actions/impl/AcceptEventActionEventAccepterImpl.cpp
	Semantics/Actions/impl/ActionActivationImpl.cpp
	Semantics/Activities/impl/ActivityEdgeInstanceImpl.cpp
	Semantics/Activities/impl/ActivityExecutionImpl.cpp
	Semantics/Activities/impl/ActivityFinalNodeActivationImpl.cpp
	Semantics/Activities/impl/ActivityNodeActivationImpl.cpp
	Semantics/Activities/impl/ActivityNodeActivationGroupImpl.cpp
	Semantics/Activities/impl/ActivityParameterNodeActivationImpl.cpp
	Semantics/Actions/impl/AddStructuralFeatureValueActionActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/BooleanValueImpl.cpp
	Semantics/Actions/impl/CallActionActivationImpl.cpp
	Semantics/Actions/impl/CallBehaviorActionActivationImpl.cpp
	Semantics/CommonBehavior/impl/CallEventBehaviorImpl.cpp
	Semantics/CommonBehavior/impl/CallEventExecutionImpl.cpp
	Semantics/CommonBehavior/impl/CallEventOccurrenceImpl.cpp
	Semantics/Actions/impl/CallOperationActionActivationImpl.cpp
	Semantics/Activities/impl/CentralBufferNodeActivationImpl.cpp
	Semantics/Loci/impl/ChoiceStrategyImpl.cpp
	Semantics/CommonBehavior/impl/ClassifierBehaviorExecutionImpl.cpp
	Semantics/Activities/impl/ClassifierBehaviorExecutionActivityImpl.cpp
	Semantics/Activities/impl/ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl.cpp
	Semantics/CommonBehavior/impl/ClassifierBehaviorInvocationEventAccepterImpl.cpp
	Semantics/Actions/impl/ClauseActivationImpl.cpp
	Semantics/Actions/impl/ClearAssociationActionActivationImpl.cpp
	Semantics/Actions/impl/ClearStructuralFeatureActionActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/CompoundValueImpl.cpp
	Semantics/Actions/impl/ConditionalNodeActivationImpl.cpp
	Semantics/Activities/impl/ControlNodeActivationImpl.cpp
	Semantics/Activities/impl/ControlTokenImpl.cpp
	Semantics/Actions/impl/CreateLinkActionActivationImpl.cpp
	Semantics/Actions/impl/CreateObjectActionActivationImpl.cpp
	Semantics/Activities/impl/DataStoreNodeActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/DataValueImpl.cpp
	Semantics/Activities/impl/DecisionNodeActivationImpl.cpp
	Semantics/Actions/impl/DestroyLinkActionActivationImpl.cpp
	Semantics/Actions/impl/DestroyObjectActionActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/DispatchStrategyImpl.cpp
	Semantics/SimpleClassifiers/impl/EnumerationValueImpl.cpp
	Semantics/Values/impl/EvaluationImpl.cpp
	Semantics/CommonBehavior/impl/EventAccepterImpl.cpp
	Semantics/CommonBehavior/impl/EventDispatchLoopImpl.cpp
	Semantics/CommonBehavior/impl/EventOccurrenceImpl.cpp
	Semantics/CommonBehavior/impl/ExecutionImpl.cpp
	Semantics/Loci/impl/ExecutionFactoryImpl.cpp
	Semantics/Loci/impl/ExecutorImpl.cpp
	Semantics/Activities/impl/ExpansionActivationGroupImpl.cpp
	Semantics/Activities/impl/ExpansionNodeActivationImpl.cpp
	Semantics/Activities/impl/ExpansionRegionActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/ExtensionalValueImpl.cpp
	Semantics/StructuredClassifiers/impl/ExtensionalValueListImpl.cpp
	Semantics/CommonBehavior/impl/FIFOGetNextEventStrategyImpl.cpp
	Semantics/SimpleClassifiers/impl/FeatureValueImpl.cpp
	Semantics/Loci/impl/FirstChoiceStrategyImpl.cpp
	Semantics/Activities/impl/FlowFinalNodeActivationImpl.cpp
	Semantics/Activities/impl/ForkNodeActivationImpl.cpp
	Semantics/Activities/impl/ForkedTokenImpl.cpp
	Semantics/CommonBehavior/impl/GetNextEventStrategyImpl.cpp
	Semantics/Activities/impl/InitialNodeActivationImpl.cpp
	Semantics/Actions/impl/InputPinActivationImpl.cpp
	Semantics/Classification/impl/InstanceValueEvaluationImpl.cpp
	Semantics/SimpleClassifiers/impl/IntegerValueImpl.cpp
	Semantics/Actions/impl/InvocationActionActivationImpl.cpp
	Semantics/CommonBehavior/impl/InvocationEventOccurrenceImpl.cpp
	Semantics/Activities/impl/JoinNodeActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/LinkImpl.cpp
	Semantics/Actions/impl/LinkActionActivationImpl.cpp
	Semantics/Values/impl/LiteralBooleanEvaluationImpl.cpp
	Semantics/Values/impl/LiteralEvaluationImpl.cpp
	Semantics/Values/impl/LiteralIntegerEvaluationImpl.cpp
	Semantics/Values/impl/LiteralNullEvaluationImpl.cpp
	Semantics/Values/impl/LiteralRealEvaluationImpl.cpp
	Semantics/Values/impl/LiteralStringEvaluationImpl.cpp
	Semantics/Values/impl/LiteralUnlimitedNaturalEvaluationImpl.cpp
	Semantics/Loci/impl/LocusImpl.cpp
	Semantics/Actions/impl/LoopNodeActivationImpl.cpp
	Semantics/Activities/impl/MergeNodeActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/ObjectImpl.cpp
	Semantics/CommonBehavior/impl/ObjectActivationImpl.cpp
	Semantics/Activities/impl/ObjectNodeActivationImpl.cpp
	Semantics/Activities/impl/ObjectTokenImpl.cpp
	Semantics/Activities/impl/OfferImpl.cpp
	Semantics/CommonBehavior/impl/OpaqueBehaviorExecutionImpl.cpp
	Semantics/Actions/impl/OutputPinActivationImpl.cpp
	Semantics/CommonBehavior/impl/ParameterValueImpl.cpp
	Semantics/Actions/impl/PinActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/PrimitiveValueImpl.cpp
	Semantics/Actions/impl/ReadExtentActionActivationImpl.cpp
	Semantics/Actions/impl/ReadIsClassifiedObjectActionActivationImpl.cpp
	Semantics/Actions/impl/ReadLinkActionActivationImpl.cpp
	Semantics/Actions/impl/ReadSelfActionActivationImpl.cpp
	Semantics/Actions/impl/ReadStructuralFeatureActionActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/RealValueImpl.cpp
	Semantics/Actions/impl/ReclassifyObjectActionActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/RedefinitionBasedDispatchStrategyImpl.cpp
	Semantics/Actions/impl/ReduceActionActivationImpl.cpp
	Semantics/StructuredClassifiers/impl/ReferenceImpl.cpp
	Semantics/Actions/impl/RemoveStructuralFeatureValueActivationImpl.cpp
	Semantics/Actions/impl/ReplyActionActivationImpl.cpp
	Semantics/Actions/impl/ReturnInformationImpl.cpp
	Semantics/Loci/impl/SemanticStrategyImpl.cpp
	Semantics/Loci/impl/SemanticVisitorImpl.cpp
	Semantics/Actions/impl/SendSignalActionActivationImpl.cpp
	Semantics/CommonBehavior/impl/SignalEventOccurrenceImpl.cpp
	Semantics/SimpleClassifiers/impl/SignalInstanceImpl.cpp
	Semantics/Actions/impl/StartClassifierBehaviorActionActivationImpl.cpp
	Semantics/Actions/impl/StartObjectBehaviorActionActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/StringValueImpl.cpp
	Semantics/Actions/impl/StructuralFeatureActionActivationImpl.cpp
	Semantics/Actions/impl/StructuredActivityNodeActivationImpl.cpp
	Semantics/SimpleClassifiers/impl/StructuredValueImpl.cpp
	Semantics/Actions/impl/TestIdentityActionActivationImpl.cpp
	Semantics/Activities/impl/TokenImpl.cpp
	Semantics/Activities/impl/TokenSetImpl.cpp
	Semantics/SimpleClassifiers/impl/UnlimitedNaturalValueImpl.cpp
	Semantics/Values/impl/ValueImpl.cpp
	Semantics/Actions/impl/ValueSpecificationActionActivationImpl.cpp
	Semantics/Actions/impl/ValuesImpl.cpp
	Semantics/Actions/impl/WriteLinkActionActivationImpl.cpp
	Semantics/Actions/impl/WriteStructuralFeatureActionActivationImpl.cpp
	#${MDE4CPP_HOME}/application/include/util/ProfileCallCount.cpp
)

INCLUDE_DIRECTORIES(
	../
	${MDE4CPP_HOME}/application/include
)

# Apple specific stuff
if(APPLE)
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -undefined dynamic_lookup")
  set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -undefined dynamic_lookup")
endif(APPLE)

IF(UNIX AND NOT APPLE)
    # for Linux, BSD, Solaris, Minix
	IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
		FIND_LIBRARY(ECORE_DEBUG ecored.so ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(TYPES_DEBUG typesd.so ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(UML_DEBUG umld.so ${MDE4CPP_HOME}/application/bin)
		
	ELSE()
		FIND_LIBRARY(ECORE_RELEASE ecore.so ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(TYPES_RELEASE types.so ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(UML_RELEASE uml.so ${MDE4CPP_HOME}/application/bin)
		
	ENDIF()
ELSEIF(APPLE)
	IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
		FIND_LIBRARY(ECORE_DEBUG ecored.dylib ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(TYPES_DEBUG typesd.dylib ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(UML_DEBUG umld.dylib ${MDE4CPP_HOME}/application/bin)
		
	ELSE()
		FIND_LIBRARY(ECORE_RELEASE ecore.dylib ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(TYPES_RELEASE types.dylib ${MDE4CPP_HOME}/application/bin)
		FIND_LIBRARY(UML_RELEASE uml.dylib ${MDE4CPP_HOME}/application/bin)
		
	ENDIF()
ELSE()
	IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
		FIND_LIBRARY(ECORE_DEBUG ecored ${MDE4CPP_HOME}/application/lib)
		FIND_LIBRARY(TYPES_DEBUG typesd ${MDE4CPP_HOME}/application/lib)
		FIND_LIBRARY(UML_DEBUG umld ${MDE4CPP_HOME}/application/lib)
		
	ELSE()
		FIND_LIBRARY(ECORE_RELEASE ecore ${MDE4CPP_HOME}/application/lib)
		FIND_LIBRARY(TYPES_RELEASE types ${MDE4CPP_HOME}/application/lib)
		FIND_LIBRARY(UML_RELEASE uml ${MDE4CPP_HOME}/application/lib)
		
	ENDIF()
ENDIF()

ADD_LIBRARY(${PROJECT_NAME} SHARED ${SOURCE_FILES})
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PREFIX "")

IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
	TARGET_LINK_LIBRARIES(${PROJECT_NAME}
		debug ${ECORE_DEBUG}
		debug ${TYPES_DEBUG}
		debug ${UML_DEBUG}
	)
ELSE()
	TARGET_LINK_LIBRARIES(${PROJECT_NAME}
		optimized ${ECORE_RELEASE}
		optimized ${TYPES_RELEASE}
		optimized ${UML_RELEASE}
	)
ENDIF()

#-----------------------------------------------------
# DELIVERING binaries and header to ${MDE4CPP_HOME}
#-----------------------------------------------------

INSTALL(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${MDE4CPP_HOME}/application/bin
    LIBRARY DESTINATION ${MDE4CPP_HOME}/application/bin
    ARCHIVE DESTINATION ${MDE4CPP_HOME}/application/lib
)

INSTALL(DIRECTORY . DESTINATION ${MDE4CPP_HOME}/application/include/${PROJECT_NAME}
	FILES_MATCHING PATTERN "*.hpp"
	PATTERN ".cmake" EXCLUDE
)
