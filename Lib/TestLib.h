//
// Created by 西村智 on 2019-05-08.
//

#ifndef TEST_TESTLIB_H
#define TEST_TESTLIB_H

// Generic helper definitions for shared library support
#if defined _WIN32 || defined __CYGWIN__
#define TEST_LIB_DLL_IMPORT __declspec(dllimport)
#define TEST_LIB_DLL_EXPORT __declspec(dllexport)
#define TEST_LIB_DLL_LOCAL
#else
#if __GNUC__ >= 4
#define TEST_LIB_DLL_IMPORT __attribute__ ((visibility ("default")))
#define TEST_LIB_DLL_EXPORT __attribute__ ((visibility ("default")))
#define TEST_LIB_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
#else
#define TEST_LIB_DLL_IMPORT
#define TEST_LIB_DLL_EXPORT
#define TEST_LIB_DLL_LOCAL
#endif
#endif

// Now we use the generic helper definitions above to define TEST_API and TEST_LOCAL.
// TEST_API is used for the public API symbols. It either DLL imports or DLL exports (or does nothing for static build)
// TEST_LOCAL is used for non-api symbols.

//#ifdef TEST_DLL // defined if TEST is compiled as a DLL
#ifdef TEST_EXPORTS // defined if we are building the TEST DLL (instead of using it)
#define TEST_API TEST_LIB_DLL_EXPORT
#define EXPORT "EXPORTED"
#else
#define TEST_API TEST_LIB_DLL_IMPORT
#define EXPORT "NOT EXPORTED"
#endif // TEST_DLL_EXPORTS
#define TEST_LOCAL TEST_LIB_DLL_LOCAL
//#else // TEST_DLL is not defined: this means TEST is a static lib.
//#define TEST_API
//#define TEST_LOCAL
//#endif // TEST_DLL

int TEST_API testLib(int argc, char *argv[]);

#endif //TEST_TESTLIB_H
