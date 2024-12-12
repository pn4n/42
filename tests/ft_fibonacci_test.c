#include <stdio.h>

int ft_fibonacci(int index);

int main() {
    int er = 0;
	size_t i = 0;

    // Test cases
    int test_cases[][2] = {
        {0, 0},    // Fibonacci(0) = 0
        {1, 1},    // Fibonacci(1) = 1
        {2, 1},    // Fibonacci(2) = 1
        {3, 2},    // Fibonacci(3) = 2
        {4, 3},    // Fibonacci(4) = 3
        {5, 5},    // Fibonacci(5) = 5
        {6, 8},    // Fibonacci(6) = 8
        {7, 13},   // Fibonacci(7) = 13
        {8, 21},   // Fibonacci(8) = 21
        {9, 34},   // Fibonacci(9) = 34
        {10, 55},  // Fibonacci(10) = 55
        {-1, -1},   // Invalid case, should return -1
		{22, 17711},
		{-100, -1},
		{},
		//{48, 512559680}, //overflow!
		{-823764, -1}
	};

    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
		int index = test_cases[i][0];
        printf("test %zu:\t\t fib(%d)\t", i, index);
        int expected = test_cases[i][1];
        int result = ft_fibonacci(index);

        if (result != expected) {
            er = 1;
            printf("\nTEST FAILED ❌: ft_fibonacci(%d) = %d (expected %d)\n\n", index, result, expected);
        }
		else printf("%d✅\n\n", result);
    }

    if (er == 0) {
        printf("All tests passed! ✅\n");
    }

    return 0;
}
