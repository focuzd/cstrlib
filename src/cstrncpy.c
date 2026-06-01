#include "strlib.h"

char* cstrncpy(char* dst, const char* src, size_t count)
{
    char* p = dst;
    size_t i = 0;

    while (i < count && *src) {
        *p++ = *src++;
        i++;
    }

    while (i < count) {
        *p++ = '\0';
        i++;
    }

    return dst;
}