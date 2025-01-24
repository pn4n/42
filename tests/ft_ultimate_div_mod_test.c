#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void test_ft_ultimate_div_mod() {
    int a, b;
    int er = 0; // Error flag

    // Test case 1: Normal division
    a = 10; b = 3;
    ft_ultimate_div_mod(&a, &b);
    if (a != 3 || b != 1) {
        printf("Test 1 - Expected: a = 3, b = 1; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Test case 2: Division with negative dividend
    a = -10; b = 3;
    ft_ultimate_div_mod(&a, &b);
    if (a != -3 || b != -1) {
        printf("Test 2 - Expected: a = -3, b = -1; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Test case 3: Division with negative divisor
    a = 10; b = -3;
    ft_ultimate_div_mod(&a, &b);
    if (a != -3 || b != 1) {
        printf("Test 3 - Expected: a = -3, b = 1; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Test case 4: Division by zero
    a = 10; b = 0;
    ft_ultimate_div_mod(&a, &b);
    if (a != 0 || b != 0) {
        printf("Test 4 - Expected: a = 0, b = 0; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Test case 5: Both values are zero
    a = 0; b = 1;
    ft_ultimate_div_mod(&a, &b);
    if (a != 0 || b != 0) {
        printf("Test 5 - Expected: a = 0, b = 0; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Test case 6: Large numbers
    a = 2147483647; b = 2;
    ft_ultimate_div_mod(&a, &b);
    if (a != 1073741823 || b != 1) {
        printf("Test 6 - Expected: a = 1073741823, b = 1; Result: a = %d, b = %d\n", a, b);
        er = 1;
    }

    // Print message if all tests passed
    if (er == 0) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_ultimate_div_mod();
    return 0;
}
