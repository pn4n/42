#include <stdio.h>
#include <limits.h>

int ft_sqrt(int);
int test_cases[][2] = {
    {0, 0},
    {1, 1},
    {4, 2},
    {9, 3},
    {16, 4},
    {25, 5},
    {36, 6},
    {49, 7},
    {64, 8},
    {81, 9},
    {100, 10},
    {INT_MAX, 0}, // test with maximum integer value
    {INT_MIN, 0}, // test with minimum integer value
    {0, 0}, // test with zero
    {-INT_MAX, 0}, // test with negative maximum integer value
    {-INT_MIN, 0}, // test with negative minimum integer value
    {1, 1}, // test with one
    {-1, 0} // test with negative one
    // ...
};




int main() {
    int i, er = 0;

    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        int nb = test_cases[i][0];
        printf("Test %d: ft_sqrt(%d)\n", i + 1, nb);
        int expected = test_cases[i][1];
        int result = ft_sqrt(nb);

        printf("Result = %d (expected %d)\n", result, expected);

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