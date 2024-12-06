#include <stdio.h>

int ft_str_is_printable(char *str);

void test_str_is_printable(char *test_name, char *str, int expected) {
    int result = ft_str_is_printable(str);
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
    test_str_is_printable("Normal text", "Hello World!", 1);
    test_str_is_printable("Empty string", "", 1);
    test_str_is_printable("With newline", "Hello\n", 0);
    test_str_is_printable("With tab", "Hello\t", 0);
    test_str_is_printable("Non-printable char", "Hello\x01", 0);
    return 0;
}
