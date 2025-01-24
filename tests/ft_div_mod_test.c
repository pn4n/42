#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void test_ft_div_mod() {
    int div, mod, er = 0;

    // Test case 1: Normal division
    ft_div_mod(10, 3, &div, &mod);
    if (div != 3 || mod != 1) {
        printf("Test 1 - Expected: div = 3, mod = 1; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Test case 2: Division with negative dividend
    ft_div_mod(-10, 3, &div, &mod);
    if (div != -3 || mod != -1) {
        printf("Test 2 - Expected: div = -3, mod = -1; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Test case 3: Division with negative divisor
    ft_div_mod(10, -3, &div, &mod);
    if (div != -3 || mod != 1) {
        printf("Test 3 - Expected: div = -3, mod = 1; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Test case 4: Division by zero
    ft_div_mod(10, 0, &div, &mod);
    if (div != 0 || mod != 0) {
        printf("Test 4 - Expected: div = 0, mod = 0; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Test case 5: Both values are zero
    ft_div_mod(0, 1, &div, &mod);
    if (div != 0 || mod != 0) {
        printf("Test 5 - Expected: div = 0, mod = 0; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Test case 6: Large numbers
    ft_div_mod(2147483647, 2, &div, &mod);
    if (div != 1073741823 || mod != 1) {
        printf("Test 6 - Expected: div = 1073741823, mod = 1; Result: div = %d, mod = %d\n", div, mod);er = 1;
    }

    // Print message if all tests passed
    if (!(er)) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_div_mod();
    return 0;
}
