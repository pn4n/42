#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int er = 0;
    int *range;
    int size;
    int i;

    size = ft_ultimate_range(&range, 1, 5);
    printf("TEST #1: ft_ultimate_range(&range, 1, 5)\n");
    printf("Expected size: 4\n");
    printf("Got size: %d\n", size);
    printf("Expected values: 1 2 3 4\n");
    printf("Got values:      ");
    for (i = 0; i < size; i++)
    {
        if (range[i] != i + 1)
            er = 1;
        printf("%d ", range[i]);
    }
    printf("\n");
    if (er || size != 4)
        printf("TEST #1 FAILED ❌\n");
    free(range);

    size = ft_ultimate_range(&range, -3, 2);
    printf("\nTEST #2: ft_ultimate_range(&range, -3, 2)\n");
    printf("Expected size: 5\n");
    printf("Got size: %d\n", size);
    printf("Expected values: -3 -2 -1 0 1\n");
    printf("Got values:      ");
    for (i = 0; i < size; i++)
    {
        if (range[i] != i - 3)
            er = 1;
        printf("%d ", range[i]);
    }
    printf("\n");
    if (er || size != 5)
        printf("TEST #2 FAILED ❌\n");
    free(range);

    size = ft_ultimate_range(&range, 5, 5);
    printf("\nTEST #3: ft_ultimate_range(&range, 5, 5)\n");
    printf("Expected size: 0\n");
    printf("Got size: %d\n", size);
    printf("Expected range: NULL\n");
    printf("Got range: %p\n", (void *)range);
    if (size != 0 || range != NULL)
    {
        er = 1;
        printf("TEST #3 FAILED ❌\n");
    }

    size = ft_ultimate_range(&range, 10, 5);
    printf("\nTEST #4: ft_ultimate_range(&range, 10, 5)\n");
    printf("Expected size: 0\n");
    printf("Got size: %d\n", size);
    printf("Expected range: NULL\n");
    printf("Got range: %p\n", (void *)range);
    if (size != 0 || range != NULL)
    {
        er = 1;
        printf("TEST #4 FAILED ❌\n");
    }

    size = ft_ultimate_range(&range, 2147483646, 2147483647);
    printf("\nTEST #5: ft_ultimate_range(&range, 2147483646, 2147483647)\n");
    printf("Expected size: 1\n");
    printf("Got size: %d\n", size);
    printf("Expected value: 2147483646\n");
    printf("Got value: %d\n", range[0]);
    if (size != 1 || range[0] != 2147483646)
    {
        er = 1;
        printf("TEST #5 FAILED ❌\n");
    }

    size = ft_ultimate_range(&range, 5, 3);
    printf("\nTEST #6: ft_ultimate_range(&range, 5, 3)\n");
    printf("Expected size: 0\n");
    printf("Got size: %d\n", size);
    printf("Expected range: NULL\n");
    printf("Got range: %p\n", (void *)range);
    if (size != 0 || range != NULL)
    {
        er = 1;
        printf("TEST #6 FAILED ❌\n");
    }

    size = ft_ultimate_range(&range, 2147483646, 2147483647);
    printf("\nTEST #7: ft_ultimate_range(&range, 2147483646, 2147483647)\n");
    printf("Expected size: 1\n");
    printf("Got size: %d\n", size);
    printf("Expected value: 2147483646\n");
    printf("Got value: %d\n", range[0]);
    if (size != 1 || range[0] != 2147483646)
    {
        er = 1;
        printf("TEST #7 FAILED ❌\n");
    }
    free(range);

    if (!er)
        printf("\nAll tests passed ✅\n");

    return 0;
}
