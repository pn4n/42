#include <stdio.h>
#include <limits.h>

void ft_putnbr(int nb);

void test_putnbr(char *test_name, int number) {
    printf("\nTest: %s\n", test_name);
    printf("Expected: %d\n", number);
    printf("Actual  : ");
    ft_putnbr(number);
    printf("\n");
    
    // Note: For putnbr, we keep all outputs since we need to visually verify
    // the output matches, as we can't directly compare the output stream
}

int main(void) {
    printf("Running tests...\n");
    
    // Test cases remain the same, but outputs are cleaner
    test_putnbr("Zero", 0);
    test_putnbr("Positive", 42);
    test_putnbr("Negative", -42);
    test_putnbr("INT_MAX", INT_MAX);
    test_putnbr("INT_MIN", INT_MIN);
    
    printf("\nTests completed.\n");
    return 0;
}
