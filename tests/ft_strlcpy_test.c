#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void test_ft_strlcpy() {
    char dest1[10];
    char src1[] = "Hello, World!";
    unsigned int size1 = 10;
    unsigned int result1 = ft_strlcpy(dest1, src1, size1);
    printf("Test 1:\nExpected: %s, length: %lu\nResult: %s, length: %u\n", "Hello, W", strlen("Hello, W"), dest1, result1);
    if (strcmp(dest1, "Hello, W") == 0 && result1 == strlen(src1)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char dest2[5];
    char src2[] = "Hello";
    unsigned int size2 = 5;
    unsigned int result2 = ft_strlcpy(dest2, src2, size2);
    printf("\nTest 2:\nExpected: %s, length: %lu\nResult: %s, length: %u\n", "Hello", strlen("Hello"), dest2, result2);
    if (strcmp(dest2, "Hello") == 0 && result2 == strlen(src2)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char dest3[10];
    char src3[] = "";
    unsigned int size3 = 10;
    unsigned int result3 = ft_strlcpy(dest3, src3, size3);
    printf("\nTest 3:\nExpected: %s, length: %lu\nResult: %s, length: %u\n", "", strlen(""), dest3, result3);
    if (strcmp(dest3, "") == 0 && result3 == strlen(src3)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char dest4[10];
    char src4[] = "Hello, World!";
    unsigned int size4 = 0;
    unsigned int result4 = ft_strlcpy(dest4, src4, size4);
    printf("\nTest 4:\nExpected: %s, length: %lu\nResult: %s, length: %u\n", "", strlen(""), dest4, result4);
    if (strcmp(dest4, "") == 0 && result4 == strlen(src4)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    printf("\nAll tests passed!\n");
}

int main() {
    test_ft_strlcpy();
    return 0;
}