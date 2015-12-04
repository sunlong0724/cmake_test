#include <stdio.h>
#include "hello.h"

HELLO_API void hello(const char * name)
{
    printf ("Hello %s!/n", name);
}