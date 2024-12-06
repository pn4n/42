#include <stdio.h>

int ft_str_is_numeric(char *str);

void test_str_is_numeric(char *test_name, char *str, int expected) {
    int result = ft_str_is_numeric(str);
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
    test_str_is_numeric("Only numbers", "12345", 1);
    test_str_is_numeric("With letters", "123abc", 0);
    test_str_is_numeric("Empty string", "", 1);
    test_str_is_numeric("Special chars", "123!", 0);
    test_str_is_numeric("Mixed", "1a2b3c", 0);
    return 0;
}
