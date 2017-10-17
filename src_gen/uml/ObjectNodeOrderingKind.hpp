//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTNODEORDERINGKIND_HPP
#define UML_OBJECTNODEORDERINGKIND_HPP

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

namespace uml 
{
	enum ObjectNodeOrderingKind {
		FIFO = 3
,
		LIFO = 2
,
		ORDERED = 1
,
		UNORDERED = 0
	};
}
#endif /* end of include guard: OBJECTNODEORDERINGKIND_HPP */
