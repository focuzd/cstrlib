#ifndef TEST_H
#define TEST_H

#define FAIL(str) do {printf("Test failed: %s\n", (str)); failed++;} while (0);
#define PASS(str) do {printf("Test passed: %s\n", (str)); passed++;} while (0);

#endif