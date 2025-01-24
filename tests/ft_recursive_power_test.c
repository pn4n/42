#include <stdio.h>
#include "power_test.h"

int ft_recursive_power(int nb, int power);

int main() {
    int er = 0;
	size_t i;
    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        int nb = test_cases[i][0];
        int power = test_cases[i][1];
        int expected = test_cases[i][2];
        int result = ft_recursive_power(nb, power);

        printf("Test %zu: ft_recursive_power(%d, %d) = %d (expected %d)\n", i, nb, power, result, expected);

        if (result != expected) {
            er = 1;
            printf("TEST FAILED ❌\n");
        }
    }

    if (!er) {
        printf("ALL TESTS PASSED ✅A\n");
    }

    return 0;
}
