#include <stdio.h>
#include <string.h>
#include "strlib.h"
#include "test.h"

#define BUFFER_SIZE 25

int passed = 0, failed = 0;
void test_strcpy(const char* str, size_t count);

int main(void)
{
    test_strcpy("", BUFFER_SIZE);
    test_strcpy("s", BUFFER_SIZE);
    test_strcpy("nospaces", BUFFER_SIZE);
    test_strcpy("with spaces", BUFFER_SIZE);
    test_strcpy("with\0embedded", BUFFER_SIZE);
    test_strcpy("with\tescape\nseqeuences", BUFFER_SIZE);
    test_strcpy("equal to the buffer size", BUFFER_SIZE); // here is includes the \0
    // test_strcpy("greater than the buffer size", BUFFER_SIZE);

    test_strcpy("", 0);
    test_strcpy("s", 0);
    test_strcpy("s", 1);
    test_strcpy("nospaces", 4);
    test_strcpy("with spaces", 2);
    test_strcpy("with\0embedded", 8);
    test_strcpy("with\tescape\nseqeuences", 12);
    test_strcpy("equal to the buffer size", 10); // here is includes the \0
    test_strcpy("greater than the buffer size", 30);

    printf("Passed tests: %d\n", passed);
    printf("Failed tests: %d\n", failed);
}

void test_strcpy(const char* str, size_t count)
{
    char expected[BUFFER_SIZE], actual[BUFFER_SIZE];
    strncpy(expected, str, count); 
    cstrncpy(actual, str, count);

    if (strncmp(expected, actual, count) == 0) {
        PASS(str);
    }
    else {
        FAIL(str);
        printf("exptected: %s\nactual: %s\n", expected, actual);
    }
}