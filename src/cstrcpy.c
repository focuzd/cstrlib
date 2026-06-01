#include "strlib.h"

char* cstrcpy(char* dst, const char* src)
{
    char* p = dst;
    while (*p++ = *src++);
    return dst;
}