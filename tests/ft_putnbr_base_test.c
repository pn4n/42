#include <stdio.h>
#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

void test_putnbr_base(char *test_name, int number, char *base) {
    printf("\nTest: %s\n", test_name);
    printf("Number: %d\n", number);
    printf("Base: %s\n", base);
    printf("Output: ");
    ft_putnbr_base(number, base);
    printf("\n");
}

int main(void) {
    printf("Running ft_putnbr_base tests...\n");

    // Valid cases
    test_putnbr_base("Decimal", 42, "0123456789");
    test_putnbr_base("Binary", 42, "01");
    test_putnbr_base("Hexadecimal", 42, "0123456789ABCDEF");
    test_putnbr_base("Custom base", 42, "poneyvif");
    
    // Negative numbers
    test_putnbr_base("Negative decimal", -42, "0123456789");
    test_putnbr_base("Negative binary", -42, "01");
    test_putnbr_base("Negative hex", -42, "0123456789ABCDEF");
    
    // Edge cases
    test_putnbr_base("Zero decimal", 0, "0123456789");
    test_putnbr_base("INT_MAX decimal", 2147483647, "0123456789");
    test_putnbr_base("INT_MIN decimal", -2147483648, "0123456789");
    
    // Invalid bases (should not output anything)
    test_putnbr_base("Empty base", 42, "");
    test_putnbr_base("Single char base", 42, "1");
    test_putnbr_base("Duplicate chars", 42, "0123456789ABCDEFAA");
    test_putnbr_base("Base with +", 42, "0123456+789");
    test_putnbr_base("Base with -", 42, "0123-456789");
    
    printf("\nTests completed.\n");
    return 0;
}
