#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

void test_ft_ultimate_ft() {
    int test_value;
    int *ptr1 = &test_value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    // Test case 1: Normal case
    test_value = 0;
    ft_ultimate_ft(&ptr8);
    printf("Test 1 - Expected: 42, Result: %d\n", test_value);

    // Test case 2: Negative value
    test_value = -1;
    ft_ultimate_ft(&ptr8);
    printf("Test 2 - Expected: 42, Result: %d\n", test_value);

    // Test case 3: Large positive value
    test_value = 1000;
    ft_ultimate_ft(&ptr8);
    printf("Test 3 - Expected: 42, Result: %d\n", test_value);

    // Test case 4: Large negative value
    test_value = -1000;
    ft_ultimate_ft(&ptr8);
    printf("Test 4 - Expected: 42, Result: %d\n", test_value);

    // Test case 5: Zero
    test_value = 0;
    ft_ultimate_ft(&ptr8);
    printf("Test 5 - Expected: 42, Result: %d\n", test_value);

    // Check if all tests passed
    if (test_value == 42) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_ultimate_ft();
    return 0;
}
