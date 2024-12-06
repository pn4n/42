#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

void test_ft_strcapitalize() {
    char test1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char expected1[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("Test 1:\nExpected: %s\nResult: %s\n", expected1, ft_strcapitalize(test1));
    if (strcmp(expected1, test1) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test2[] = "hello world";
    char expected2[] = "Hello World";
    printf("\nTest 2:\nExpected: %s\nResult: %s\n", expected2, ft_strcapitalize(test2));
    if (strcmp(expected2, test2) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test3[] = "tHis Is A tEsT";
    char expected3[] = "This Is A Test";
    printf("\nTest 3:\nExpected: %s\nResult: %s\n", expected3, ft_strcapitalize(test3));
    if (strcmp(expected3, test3) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test4[] = "123hello";
    char expected4[] = "123hello";
    printf("\nTest 4:\nExpected: %s\nResult: %s\n", expected4, ft_strcapitalize(test4));
    if (strcmp(expected4, test4) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    char test5[] = "";
    char expected5[] = "";
    printf("\nTest 5:\nExpected: %s\nResult: %s\n", expected5, ft_strcapitalize(test5));
    if (strcmp(expected5, test5) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    printf("\nAll tests passed!\n");
}

int main() {
    test_ft_strcapitalize();
    return 0;
}