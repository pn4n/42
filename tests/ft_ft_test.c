#include <stdio.h>

void ft_ft(int *nbr);

void test_ft_ft() {
    int test_value;

    // Test case 1: Normal case
    test_value = 0;
    ft_ft(&test_value);
    printf("Test 1 - Expected: 42, Result: %d\n", test_value);

    // Test case 2: Negative value
    test_value = -1;
    ft_ft(&test_value);
    printf("Test 2 - Expected: 42, Result: %d\n", test_value);

    // Test case 3: Large positive value
    test_value = 1000;
    ft_ft(&test_value);
    printf("Test 3 - Expected: 42, Result: %d\n", test_value);

    // Test case 4: Large negative value
    test_value = -1000;
    ft_ft(&test_value);
    printf("Test 4 - Expected: 42, Result: %d\n", test_value);

    // Test case 5: Zero
    test_value = 0;
    ft_ft(&test_value);
    printf("Test 5 - Expected: 42, Result: %d\n", test_value);

    // Test case 6: Pointer to a large integer
    int large_value = 2147483647; // Max int value
    ft_ft(&large_value);
    printf("Test 6 - Expected: 42, Result: %d\n", large_value);

    // Test case 7: Pointer to a small integer
    int small_value = -2147483648; // Min int value
    ft_ft(&small_value);
    printf("Test 7 - Expected: 42, Result: %d\n", small_value);

    // Check if all tests passed
    if (test_value == 42 && large_value == 42 && small_value == 42) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_ft();
    return 0;
}
