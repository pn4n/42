#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

void test_strupcase(char *test_name, char *input, char *expected) {
    char str[256];
    strcpy(str, input);
    ft_strupcase(str);
    
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
    test_strupcase("Basic", "hello", "HELLO");
    test_strupcase("Mixed case", "HeLLo", "HELLO");
    test_strupcase("With numbers", "hello123", "HELLO123");
    test_strupcase("Empty string", "", "");
    test_strupcase("Special chars", "hello!", "HELLO!");
    return 0;
}
