#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    int er = 0;
    char *result;
    
    char *test1[] = {"Hello", "World", "!"};
    result = ft_strjoin(3, test1, " ");
    if (strcmp(result, "Hello World !") != 0) {
        printf("❌ TEST #1 FAILED\n");
        printf("Expected: Hello World !\n");
        printf("Got: %s\n", result);
        er = 1;
    }
    free(result);

    char *test2[] = {"One"};
    result = ft_strjoin(1, test2, "---");
    if (strcmp(result, "One") != 0) {
        printf("❌ TEST #2 FAILED\n");
        printf("Expected: One\n");
        printf("Got: %s\n", result);
        er = 1;
    }
    free(result);

    result = ft_strjoin(0, NULL, " ");
    if (strcmp(result, "") != 0) {
        printf("❌ TEST #3 FAILED\n");
        printf("Expected: \n");
        printf("Got: %s\n", result);
        er = 1;
    }
    free(result);

    char *test4[] = {"", "", ""};
    result = ft_strjoin(3, test4, "|");
    if (strcmp(result, "||") != 0) {
        printf("❌ TEST #4 FAILED\n");
        printf("Expected: ||\n");
        printf("Got: %s\n", result);
        er = 1;
    }
    free(result);

    char *test5[] = {"Test", "", "Case"};
    result = ft_strjoin(3, test5, "-");
    if (strcmp(result, "Test--Case") != 0) {
        printf("❌ TEST #5 FAILED\n");
        printf("Expected: Test--Case\n");
        printf("Got: %s\n", result);
        er = 1;
    }
    free(result);

    if (er == 0)
        printf("✅ All tests passed successfully!\n");

    return er;
}
