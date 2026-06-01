#include <stdio.h>
#include <string.h>
#include "test.h"
#include "strlib.h"

int passed = 0, failed = 0;
void test_cstrlen(const char* str);

int main(void)
{
    test_cstrlen("");
    test_cstrlen("s");
    test_cstrlen("nospaces");
    test_cstrlen("with spaces");
    test_cstrlen("with\0embedded");
    test_cstrlen("with\tescape\nseqeuences");
    printf("Passed tests: %d\n", passed);
    printf("Failed tests: %d\n", failed);
}

void test_cstrlen(const char* str)
{
    if (strlen(str) == cstrlen(str)) {
        PASS(str);
    }
    else {
        FAIL(str);
    }
}