/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:17:03 by nmkrtchy          #+#    #+#             */
/*   Updated: 2024/12/12 20:24:11 by nmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main() {
    int er = 0;

    // Test case 1: Normal string
    char *test1 = "Hello, World!";
    char *result1 = ft_strdup(test1);
    if (strcmp(result1, test1) != 0) {
        er = 1;
        printf("TEST 0 FAILED ❌: Expected '%s', got '%s'\n", test1, result1);
    }
    free(result1);

    // Test case 2: Empty string
    char *test2 = "";
    char *result2 = ft_strdup(test2);
    if (strcmp(result2, test2) != 0) {
        er = 1;
        printf("TEST 1 FAILED ❌: Expected '%s', got '%s'\n", test2, result2);
    }
    free(result2);

    // Test case 3: NULL input
    char *test3 = NULL;
    char *result3 = ft_strdup(test3);
    if (result3 != NULL) {
        er = 1;
        printf("TEST 2 FAILED ❌: Expected NULL, got '%s'\n", result3);
    }
    // No need to free result3 since it's NULL

    // Test case 4: String with special characters
    char *test4 = "Special chars: !@#$%^&*()";
    char *result4 = ft_strdup(test4);
    if (strcmp(result4, test4) != 0) {
        er = 1;
        printf("TEST 3 FAILED ❌: Expected '%s', got '%s'\n", test4, result4);
    }
    free(result4);

    // Test case 5: Long string
    char *test5 = "This is a very long string to test the ft_strdup function. It should handle long strings correctly.";
    char *result5 = ft_strdup(test5);
    if (strcmp(result5, test5) != 0) {
        er = 1;
        printf("TEST 4 FAILED ❌: Expected '%s', got '%s'\n", test5, result5);
    }
    free(result5);

    if (er == 0) {
        printf("All tests passed! ✅\n");
    }

    return 0;
}
