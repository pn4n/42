#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void print_test_result(int test_num, int success) {
    if (!success)
        printf("TEST #%d FAILED ❌\n", test_num);
    else
        printf("TEST #%d PASSED ✅\n", test_num);
}

int main(void) {
    int er = 0;
    t_stock_str *result;
    
    // Test 1: Normal case
    char *strs1[] = {"Hello", "World", "42"};
    result = ft_strs_to_tab(3, strs1);
    if (!result || result[0].size != 5 || strcmp(result[0].str, "Hello") != 0 || 
        strcmp(result[0].copy, "Hello") != 0 || result[3].str != 0) {
        er = 1;
        print_test_result(1, 0);
    } else {
        print_test_result(1, 1);
    }
    free(result);

    // Test 2: Empty array
    result = ft_strs_to_tab(0, NULL);
    if (!result || result[0].str != 0) {
        er = 1;
        print_test_result(2, 0);
    } else {
        print_test_result(2, 1);
    }
    free(result);

    // Test 3: Single empty string
    char *strs3[] = {""};
    result = ft_strs_to_tab(1, strs3);
    if (!result || result[0].size != 0 || strcmp(result[0].str, "") != 0 || 
        strcmp(result[0].copy, "") != 0 || result[1].str != 0) {
        er = 1;
        print_test_result(3, 0);
    } else {
        print_test_result(3, 1);
    }
    free(result);

    // Test 4: Long string
    char *strs4[] = {"This is a very long string to test the memory allocation"};
    result = ft_strs_to_tab(1, strs4);
    if (!result || result[0].size != (int)strlen(strs4[0]) || 
        strcmp(result[0].str, strs4[0]) != 0 || 
        strcmp(result[0].copy, strs4[0]) != 0 || result[1].str != 0) {
        er = 1;
        print_test_result(4, 0);
    } else {
        print_test_result(4, 1);
    }
    free(result);

    // Test 5: Multiple empty strings
    char *strs5[] = {"", "", ""};
    result = ft_strs_to_tab(3, strs5);
    if (!result || result[0].size != 0 || strcmp(result[0].str, "") != 0 || 
        strcmp(result[1].str, "") != 0 || strcmp(result[2].str, "") != 0 || 
        result[3].str != 0) {
        er = 1;
        print_test_result(5, 0);
    } else {
        print_test_result(5, 1);
    }
    free(result);

    if (!er)
        printf("\nAll tests passed successfully! ✅\n");
    
    return er;
}
