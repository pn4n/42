#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void test_ft_rev_int_tab() {
    int er = 0; // Error flag

    // Test case 1: Normal case
    int arr1[] = {1, 2, 3, 4, 5};
    int expected1[] = {5, 4, 3, 2, 1};
    ft_rev_int_tab(arr1, 5);
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != expected1[i]) {
            printf("Test 1 - Expected: %d; Result: %d\n", expected1[i], arr1[i]);
            er = 1;
        }
    }

    // Test case 2: Empty array
    int arr2[] = {};
    int expected2[] = {};
    ft_rev_int_tab(arr2, 0);
    for (int i = 0; i < 0; i++) {
        if (arr2[i] != expected2[i]) {
            printf("Test 2 - Expected: %d; Result: %d\n", expected2[i], arr2[i]);
            er = 1;
        }
    }

    // Test case 3: Single element
    int arr3[] = {42};
    int expected3[] = {42};
    ft_rev_int_tab(arr3, 1);
    for (int i = 0; i < 1; i++) {
        if (arr3[i] != expected3[i]) {
            printf("Test 3 - Expected: %d; Result: %d\n", expected3[i], arr3[i]);
            er = 1;
        }
    }

    // Test case 4: Two elements
    int arr4[] = {1, 2};
    int expected4[] = {2, 1};
    ft_rev_int_tab(arr4, 2);
    for (int i = 0; i < 2; i++) {
        if (arr4[i] != expected4[i]) {
            printf("Test 4 - Expected: %d; Result: %d\n", expected4[i], arr4[i]);
            er = 1;
        }
    }

    // Test case 5: Negative numbers
    int arr5[] = {-1, -2, -3, -4, -5};
    int expected5[] = {-5, -4, -3, -2, -1};
    ft_rev_int_tab(arr5, 5);
    for (int i = 0; i < 5; i++) {
        if (arr5[i] != expected5[i]) {
            printf("Test 5 - Expected: %d; Result: %d\n", expected5[i], arr5[i]);
            er = 1;
        }
    }

    // Print message if all tests passed
    if (er == 0) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_rev_int_tab();
    return 0;
}
