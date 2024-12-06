#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

void test_strcpy(char *test_name, char *src) {
    char expected[256] = {0};
    char result[256] = {0};
    
    strcpy(expected, src);
    ft_strcpy(result, src);
    
    if (strcmp(expected, result) != 0) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("Source: \"%s\"\n", src);
        printf("Expected: \"%s\"\n", expected);
        printf("Result  : \"%s\"\n", result);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    test_strcpy("Basic string", "Hello");
    test_strcpy("Empty string", "");
    test_strcpy("Special chars", "Hello\tWorld\n!");
    test_strcpy("Numbers", "12345");
    test_strcpy("Mixed content", "Hello123!@#");
    return 0;
}
