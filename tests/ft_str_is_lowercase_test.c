#include <stdio.h>

int ft_str_is_lowercase(char *str);

void test_str_is_lowercase(char *test_name, char *str, int expected) {
    int result = ft_str_is_lowercase(str);
    if (result != expected) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("String: \"%s\"\n", str);
        printf("Expected: %d\n", expected);
        printf("Result  : %d\n", result);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    test_str_is_lowercase("Only lowercase", "hello", 1);
    test_str_is_lowercase("With uppercase", "Hello", 0);
    test_str_is_lowercase("Empty string", "", 1);
    test_str_is_lowercase("With numbers", "hello123", 0);
    test_str_is_lowercase("Special chars", "hello!", 0);
    return 0;
}
