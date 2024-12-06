#include <stdio.h>
#include <string.h>

void ft_putstr_non_printable(char *str);

void test_ft_putstr_non_printable() {
    char test1[] = "Coucou\ntu vas bien ?";
    char expected1[] = "Coucou\\0atu vas bien ?";
    printf("Test 1:\nExpected: %s\n", expected1);
    printf("Result: ");
    ft_putstr_non_printable(test1);
    printf("\n");
    char result1[100];
    sprintf(result1, "Coucou\\0atu vas bien ?");
    if (strcmp(result1, "Coucou\\0atu vas bien ?") == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test2[] = "Hello, World!";
    char expected2[] = "Hello, World!";
    printf("\nTest 2:\nExpected: %s\n", expected2);
    printf("Result: ");
    ft_putstr_non_printable(test2);
    printf("\n");
    char result2[100];
    sprintf(result2, "Hello, World!");
    if (strcmp(result2, "Hello, World!") == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test3[] = "";
    char expected3[] = "";
    printf("\nTest 3:\nExpected: %s\n", expected3);
    printf("Result: ");
    ft_putstr_non_printable(test3);
    printf("\n");
    char result3[100];
    sprintf(result3, "");
    if (strcmp(result3, "") == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test4[] = "\x01\x02\x03";
    char expected4[] = "\\x01\\x02\\x03";
    printf("\nTest 4:\nExpected: %s\n", expected4);
    printf("Result: ");
    ft_putstr_non_printable(test4);
    printf("\n");
    char result4[100];
    sprintf(result4, "\\x01\\x02\\x03");
    if (strcmp(result4, "\\x01\\x02\\x03") == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    printf("\nAll tests passed!\n");
}

int main() {
    test_ft_putstr_non_printable();
    return 0;
}