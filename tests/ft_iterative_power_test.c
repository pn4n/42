#include <stdio.h>
#include "power_test.h"
int ft_iterative_power(int nb, int power);

void test_power() {
    int er = 0;
    
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_tests; i++) {
        int base = test_cases[i][0];
        int power = test_cases[i][1];
        int expected = test_cases[i][2];
        int result = ft_iterative_power(base, power);
        
        printf("Base: %d, Power: %d\nExpected: %d\nGot: %d\n", 
               base, power, expected, result);
        
        if (result != expected) {
            printf("❌ Test failed!\n");
            er = 1;
        }
        printf("------------------------\n");
    }
    
    if (!er) {
        printf("✅ All tests passed successfully!\n");
    }
}

int main() {
    test_power();
    return 0;
}
