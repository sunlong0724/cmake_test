#ifndef _H_HELLO_H_
#define _H_HELLO_H_

#define EXPORT_HELLO_DLL
#ifdef EXPORT_HELLO_DLL 
#define HELLO_API __declspec(dllexport) 
#else 
#define HELLO_API __declspec(dllimport) 
#endif 

HELLO_API void hello(const char* name);
#endif //_H_HELLO_H_