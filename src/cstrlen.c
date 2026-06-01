#include "strlib.h"

size_t cstrlen(const char* str)
{
    size_t count = 0;

    while (*str) {
        count++;
        str++;
    }

    return count;
}