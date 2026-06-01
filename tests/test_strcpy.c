#include <stdio.h>
#include <string.h>
#include "test.h"
#include "strlib.h"

#define BUFFER_SIZE 25

int passed = 0, failed = 0;
void test_strcpy(const char* str);

int main(void)
{
    test_strcpy("");
    test_strcpy("s");
    test_strcpy("nospaces");
    test_strcpy("with spaces");
    test_strcpy("with\0embedded");
    test_strcpy("with\tescape\nseqeuences");
    test_strcpy("equal to the buffer size"); // here is includes the \0
    test_strcpy("greater than the buffer size");

    printf("Passed tests: %d\n", passed);
    printf("Failed tests: %d\n", failed);
}

void test_strcpy(const char* str)
{
    char expected[BUFFER_SIZE], actual[BUFFER_SIZE];
    strcpy(expected, str);
    cstrcpy(actual, str);

    if (strcmp(expected, actual) == 0) {
        PASS(str);
    }
    else {
        FAIL(str);
    }
}