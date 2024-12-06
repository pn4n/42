#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

void test_atoi(char *test_name, char *str) {
    int expected = atoi(str);
    int result = ft_atoi(str);
    
    if (expected != result) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("Input string: \"%s\"\n", str);
        printf("Expected: %d\n", expected);
        printf("Result  : %d\n", result);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    printf("Running ft_atoi tests...\n\n");

    // Basic tests
    test_atoi("Simple positive", "123");
    test_atoi("Simple negative", "-123");
    
    // Whitespace tests
    test_atoi("Leading spaces", "   123");
    test_atoi("Tab and spaces", "\t   123");
    test_atoi("All whitespaces", "\n\t\r\v\f  456");
    
    // Sign tests
    test_atoi("Multiple signs", "++123");
    test_atoi("Mixed signs", "+-+123");
    test_atoi("Many minus", "---123");
    
    // Edge cases
    test_atoi("Zero", "0");
    test_atoi("Positive zero", "+0");
    test_atoi("Negative zero", "-0");
    test_atoi("Max int", "2147483647");
    test_atoi("Min int", "-2147483648");
    
    // Invalid input tests
    test_atoi("Letters first", "abc123");
    test_atoi("Numbers then letters", "123abc");
    test_atoi("Empty string", "");
    test_atoi("Only signs", "+-");
    test_atoi("Only spaces", "   ");
    
    printf("\nTests completed.\n");
    return 0;
}
