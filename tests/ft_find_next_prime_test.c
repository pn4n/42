#include <stdio.h>
#include <limits.h>

int test_cases[][2] = {
    {0, 2}, // next prime number after 0
    {1, 2}, // next prime number after 1
    {2, 3}, // next prime number after 2
    {INT_MIN, 2}, // next prime number after INT_MIN
    {-1, 2}, // next prime number after -1
    {-2, 2}, // next prime number after -2
    {2147483646, 2147483647}, // next prime number after a large number
    {1000000000, 1000000007}, // next prime number after a billion
    {999999937, 999999941}, // next prime number after a large prime
    {999999983, 999999991}, // next prime number after a large prime
    {2147483644, 2147483647}, // next prime number after a large even number
    {3, 5}, // next prime number after 3
    {5, 7}, // next prime number after 5
    {7, 11} // next prime number after 7
};

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