#include <stdio.h>
#include "factorial_test.h"

int ft_recursive_factorial(int nb);

void test_factorial() {
    int er = 0;
    /*int test_cases[][2] = {
        {5, 120},    // Normal case
        {0, 1},      // Edge case: 0! = 1
        {1, 1},      // Edge case: 1! = 1
        {12, 479001600}, // Max valid case
        {-5, 0},     // Invalid negative
        {13, 0}      // Overflow case
    };*/
    
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_tests; i++) {
        int input = test_cases[i][0];
        int expected = test_cases[i][1];
        int result = ft_recursive_factorial(input);
        
        printf("Input: %d\nExpected: %d\nGot: %d\n", input, expected, result);
        
        if (result != expected) {
            printf("❌Test failed!\n");
            er = 1;
        }
        printf("------------------------\n");
    }
    
    if (!er) {
        printf("✅All tests passed successfully!\n");
    }
}

int main() {
    test_factorial();
    return 0;
}
