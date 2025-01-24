#include <stdio.h>

void ft_sort_int_tab(int *tab, int size); 
/*{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}*/

void test_ft_sort_int_tab() {
    int er = 0; // Error flag

    // Test case 1: Normal case
    int arr1[] = {5, 3, 1, 4, 2};
    int expected1[] = {1, 2, 3, 4, 5};
    ft_sort_int_tab(arr1, 5);
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != expected1[i]) {
            printf("Test 1 - Expected: %d; Result: %d\n", expected1[i], arr1[i]);
            er = 1;
        }
    }

    // Test case 2: Already sorted
    int arr2[] = {1, 2, 3, 4, 5};
    int expected2[] = {1, 2, 3, 4, 5};
    ft_sort_int_tab(arr2, 5);
    for (int i = 0; i < 5; i++) {
        if (arr2[i] != expected2[i]) {
            printf("Test 2 - Expected: %d; Result: %d\n", expected2[i], arr2[i]);
            er = 1;
        }
    }

    // Test case 3: Reverse order
    int arr3[] = {5, 4, 3, 2, 1};
    int expected3[] = {1, 2, 3, 4, 5};
    ft_sort_int_tab(arr3, 5);
    for (int i = 0; i < 5; i++) {
        if (arr3[i] != expected3[i]) {
            printf("Test 3 - Expected: %d; Result: %d\n", expected3[i], arr3[i]);
            er = 1;
        }
    }

    // Test case 4: Single element
    int arr4[] = {42};
    int expected4[] = {42};
    ft_sort_int_tab(arr4, 1);
    for (int i = 0; i < 1; i++) {
        if (arr4[i] != expected4[i]) {
            printf("Test 4 - Expected: %d; Result: %d\n", expected4[i], arr4[i]);
            er = 1;
        }
    }

    // Test case 5: Empty array
    int arr5[] = {};
    int expected5[] = {};
    ft_sort_int_tab(arr5, 0);
    for (int i = 0; i < 0; i++) {
        if (arr5[i] != expected5[i]) {
            printf("Test 5 - Expected: %d; Result: %d\n", expected5[i], arr5[i]);
            er = 1;
        }
    }

    // Test case 6: Duplicates
    int arr6[] = {3, 1, 2, 2, 3};
    int expected6[] = {1, 2, 2, 3, 3};
    ft_sort_int_tab(arr6, 5);
    for (int i = 0; i < 5; i++) {
        if (arr6[i] != expected6[i]) {
            printf("Test 6 - Expected: %d; Result: %d\n", expected6[i], arr6[i]);
            er = 1;
        }
    }

    // Print message if all tests passed
    if (er == 0) {
        printf("All tests passed!\n");
    }
}

int main() {
    test_ft_sort_int_tab();
    return 0;
}
