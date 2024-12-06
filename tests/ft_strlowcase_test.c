#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

void test_strlowcase(char *test_name, char *input, char *expected) {
    char str[256];
    strcpy(str, input);
    ft_strlowcase(str);
    
    if (strcmp(str, expected) != 0) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("Input   : \"%s\"\n", input);
        printf("Expected: \"%s\"\n", expected);
        printf("Result  : \"%s\"\n", str);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    test_strlowcase("Basic", "HELLO", "hello");
    test_strlowcase("Mixed case", "HeLLo", "hello");
    test_strlowcase("With numbers", "HELLO123", "hello123");
    test_strlowcase("Empty string", "", "");
    test_strlowcase("Special chars", "HELLO!", "hello!");
    return 0;
}
