#include <stdio.h>

int ft_str_is_uppercase(char *str);

void test_str_is_uppercase(char *test_name, char *str, int expected) {
    int result = ft_str_is_uppercase(str);
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
    test_str_is_uppercase("Only uppercase", "HELLO", 1);
    test_str_is_uppercase("With lowercase", "HELLo", 0);
    test_str_is_uppercase("Empty string", "", 1);
    test_str_is_uppercase("With numbers", "HELLO123", 0);
    test_str_is_uppercase("Special chars", "HELLO!", 0);
    return 0;
}
