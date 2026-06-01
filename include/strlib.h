#ifndef STRLIB_H

#include <stddef.h>
#define STRLIB_H

size_t cstrlen(const char* str);

char* cstrcpy(char* dst, const char* src);
char* cstrncpy(char* dst, const char* src, size_t count);

char* cstrcat(char* head, const char* tail);
char* cstrncat(char* head, const char* tail, size_t count);

int cstrcmp(const char* str1, const char* str2);
int cstrncmp(const char* str1, const char* str2, size_t count);

char* cstrchr(const char* str, int c);
char* cstrrchr(const char* str, int c);

char* cstrtr(const char* haystack, const char* needle);

void* cmemcpy(void* dst, const void* src, size_t count);
void* cmemset(void* dst, int ch, size_t count);
void* cmemcmp(void* s1, void* s2, size_t count);

// TODO: add strtok function

#endif