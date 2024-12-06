#include <stdio.h>

int ft_atoi_base(char *str, char *base);

void test_atoi_base(char *test_name, char *str, char *base, int expected) {
    int result = ft_atoi_base(str, base);
    
    if (result != expected) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("Input string: \"%s\"\n", str);
        printf("Base: \"%s\"\n", base);
        printf("Expected: %d\n", expected);
        printf("Result  : %d\n", result);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    printf("Running ft_atoi_base tests...\n\n");

    // Valid cases - decimal base
    test_atoi_base("Simple decimal", "123", "0123456789", 123);
    test_atoi_base("Negative decimal", "-123", "0123456789", -123);
    test_atoi_base("Spaces and signs", "   ---+--+123", "0123456789", -123);

    // Binary base
    test_atoi_base("Binary positive", "1010", "01", 10);
    test_atoi_base("Binary negative", "-1010", "01", -10);

    // Hexadecimal base
    test_atoi_base("Hex positive", "FF", "0123456789ABCDEF", 255);
    test_atoi_base("Hex negative", "-FF", "0123456789ABCDEF", -255);

    // Custom base
    test_atoi_base("Custom base", "abc", "abcdef", 123);

    // Invalid cases (should return 0)
    test_atoi_base("Empty base", "123", "", 0);
    test_atoi_base("Single char base", "123", "1", 0);
    test_atoi_base("Duplicate in base", "123", "0123456789ABCDEFAA", 0);
    test_atoi_base("Base with +", "123", "012345+6789", 0);
    test_atoi_base("Base with -", "123", "01234-56789", 0);
    test_atoi_base("Base with space", "123", "0123 456789", 0);
    test_atoi_base("Invalid chars", "12X3", "0123456789", 0);

    printf("\nTests completed.\n");
    return 0;
}
