#include <stdio.h>

void ft_swap(int *a, int *b);

void test_ft_swap() {
    int x, y;
    int all_tests_passed = 1; // Flag to track if all tests pass

    // Test case 1: Normal case
    x = 5;
    y = 10;
    ft_swap(&x, &y);
    if (x != 10 || y != 5) {
        printf("Test 1 - Expected: x = 10, y = 5; Result: x = %d, y = %d\n", x, y);
        all_tests_passed = 0;
    }

    // Test case 2: Swapping negative values
    x = -5;
    y = -10;
    ft_swap(&x, &y);
    if (x != -10 || y != -5) {
        printf("Test 2 - Expected: x = -10, y = -5; Result: x = %d, y = %d\n", x, y);
        all_tests_passed = 0;
    }

    // Test case 3: Swapping zero
    x = 0;
    y = 10;
    ft_swap(&x, &y);
    if (x != 10 || y != 0) {
        printf("Test 3 - Expected: x = 10, y = 0; Result: x = %d, y = %d\n", x, y);
        all_tests_passed = 0;
    }

    // Test case 4: Swapping two zeros
    x = 0;
    y = 0;
    ft_swap(&x, &y);
    if (x != 0 || y != 0) {
        printf("Test 4 - Expected: x = 0, y = 0; Result: x = %d, y = %d\n", x, y);
        all_tests_passed = 0;
    }

    // Test case 5: Swapping large integers
    x = 2147483647; // Max int value
    y = -2147483648; // Min int value
    ft_swap(&x, &y);
    if (x != -2147483648 || y != 2147483647) {
        printf("Test 5 - Expected: x = -2147483648, y = 2147483647; Result: x = %d, y = %d\n", x, y);
        all_tests_passed = 0;
    }

    // Print message if all tests passed
    if (all_tests_passed) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_swap();
    return 0;
}
