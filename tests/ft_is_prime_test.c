#include <stdio.h>

int test_cases[][2] = {
    {2, 1}, 
    {4, 0}, // simple non-prime number
    {0, 0}, // test with zero
    {-1, 0}, // test with negative one
    {1, 0}, // test with one
    {3, 1}, 
    {5, 1}, 
    {7, 1}, 
    {9, 0}, // non-prime number
    {11, 1},
    {13, 1},
    {15, 0}, // non-prime number
    {17, 1},
    {19, 1},
    {21, 0},
    {23, 1},
    {28, 0}, // non-prime number
    {29, 1}, 
    {31, 1},
    {37, 1},
    {41, 1},
    {43, 1},
    {47, 1},
    {49, 0},
    {53, 1},
    {59, 1},
    {61, 1},
    {67, 1},
    {71, 1},
    {73, 1},
    {79, 1},
    {83, 1},
    {89, 1},
    {97, 1},
    {191, 1},
    {193, 1},
    {197, 1},
    {210, 0}, // non-prime number
    {211, 1},
    {219, 0}, // non-prime number
    {220, 0} // non-prime number
};
extern int ft_is_prime(int);

int main() {
    int i, er = 0;

    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        int nb = test_cases[i][0];
        int expected = test_cases[i][1];
        int result = ft_is_prime(nb);

        printf("Test %d: ft_is_prime(%d) = %d (expected %d)\n", i + 1, nb, result, expected);

        if (result != expected) {
            er = 1;
            printf("TEST FAILED ❌\n");
        }
    }

    if (!er) {
        printf("ALL TESTS PASSED ✔️\n");
    }

    return 0;
}