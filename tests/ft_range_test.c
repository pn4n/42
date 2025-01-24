#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int er = 0;
    int *arr;
    int i;

    arr = ft_range(1, 5);
    printf("TEST #1: ft_range(1, 5)\n");
    printf("Expected: 1 2 3 4\n");
    printf("Got:      ");
    for (i = 0; i < 4; i++)
    {
        if (arr[i] != i + 1)
            er = 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (er)
        printf("TEST #1 FAILED ❌\n");
    free(arr);

    arr = ft_range(-3, 2);
    printf("\nTEST #2: ft_range(-3, 2)\n");
    printf("Expected: -3 -2 -1 0 1\n");
    printf("Got:      ");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != i - 3)
            er = 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (er)
        printf("TEST #2 FAILED ❌\n");
    free(arr);

    arr = ft_range(5, 5);
    printf("\nTEST #3: ft_range(5, 5)\n");
    printf("Expected: NULL\n");
    printf("Got:      %p\n", (void *)arr);
    if (arr != NULL)
    {
        er = 1;
        printf("TEST #3 FAILED ❌\n");
    }

    arr = ft_range(10, 5);
    printf("\nTEST #4: ft_range(10, 5)\n");
    printf("Expected: NULL\n");
    printf("Got:      %p\n", (void *)arr);
    if (arr != NULL)
    {
        er = 1;
        printf("TEST #4 FAILED ❌\n");
    }

    arr = ft_range(2147483646, 2147483647);
    printf("\nTEST #5: ft_range(2147483646, 2147483647)\n");
    printf("Expected: 2147483646\n");
    printf("Got:      ");
    if (arr)
    {
        printf("%d", arr[0]);
        if (arr[0] != 2147483646)
            er = 1;
    }
    printf("\n");
    if (er)
        printf("TEST #5 FAILED ❌\n");
    free(arr);

    if (!er)
        printf("\nAll tests passed ✅\n");

    return 0;
}
