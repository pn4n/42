#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char *str, char *charset);

int main() {
    int er = 0;

    char *str1 = "hello world";
    char *charset1 = " ";
    char **res1 = ft_split(str1, charset1);
    char *expected1[] = {"hello", "world", 0};
    for (int i = 0; res1[i] != 0; i++) {
        if (strcmp(res1[i], expected1[i]) != 0) {
            er = 1;
            printf("TEST #1 FAILED ❌\n");
            printf("Expected: %s\n", expected1[i]);
            printf("Result: %s\n", res1[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #1 PASSED ✔️\n");

    er = 0;
    char *str2 = "hello world";
    char *charset2 = "l";
    char **res2 = ft_split(str2, charset2);
    char *expected2[] = {"he", "o wor", "d", 0};
    for (int i = 0; res2[i] != 0; i++) {
        if (strcmp(res2[i], expected2[i]) != 0) {
            er = 1;
            printf("TEST #2 FAILED ❌\n");
            printf("Expected: %s\n", expected2[i]);
            printf("Result: %s\n", res2[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #2 PASSED ✔️\n");

    er = 0;
    char *str3 = "hello world";
    char *charset3 = "o";
    char **res3 = ft_split(str3, charset3);
    char *expected3[] = {"hell", " w", "rld", 0};
    for (int i = 0; res3[i] != 0; i++) {
        if (strcmp(res3[i], expected3[i]) != 0) {
            er = 1;
            printf("TEST #3 FAILED ❌\n");
            printf("Expected: %s\n", expected3[i]);
            printf("Result: %s\n", res3[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #3 PASSED ✔️\n");

    er = 0;
    char *str4 = "";
    char *charset4 = " ";
    char **res4 = ft_split(str4, charset4);
    // char *expected4[] = {0};
    if (res4[0] != 0) {
        er = 1;
        printf("TEST #4 FAILED ❌\n");
        printf("Expected: empty array\n");
        printf("Result: non-empty array\n");
    }
    if (er == 0) printf("TEST #4 PASSED ✔️\n");

    er = 0;
    char *str5 = "hello world";
    char *charset5 = "";
    char **res5 = ft_split(str5, charset5);
    char *expected5[] = {"hello world", 0};
    for (int i = 0; res5[i] != 0; i++) {
        if (strcmp(res5[i], expected5[i]) != 0) {
            er = 1;
            printf("TEST #5 FAILED ❌\n");
            printf("Expected: %s\n", expected5[i]);
            printf("Result: %s\n", res5[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #5 PASSED ✔️\n");

    // Test 7: Multiple consecutive separators
    er = 0;
    char *str7 = "***hello***world***test***";
    char *charset7 = "*";
    char **res7 = ft_split(str7, charset7);
    char *expected7[] = {"hello", "world", "test", 0};
    for (int i = 0; res7[i] != 0; i++) {
        if (strcmp(res7[i], expected7[i]) != 0) {
            er = 1;
            printf("TEST #7 FAILED ❌\n");
            printf("Expected: %s\n", expected7[i]);
            printf("Result: %s\n", res7[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #7 PASSED ✔️\n");

    // Test 8: String with only separators
    er = 0;
    char *str8 = "****";
    char *charset8 = "*";
    char **res8 = ft_split(str8, charset8);
    if (res8[0] != 0) {
        er = 1;
        printf("TEST #8 FAILED ❌\n");
        printf("Expected: empty array\n");
        printf("Result: non-empty array\n");
    }
    if (er == 0) printf("TEST #8 PASSED ✔️\n");

    // Test 9: Multiple different separators
    er = 0;
    char *str9 = "hello,world;test:done";
    char *charset9 = ",;:";
    char **res9 = ft_split(str9, charset9);
    char *expected9[] = {"hello", "world", "test", "done", 0};
    for (int i = 0; res9[i] != 0; i++) {
        if (strcmp(res9[i], expected9[i]) != 0) {
            er = 1;
            printf("TEST #9 FAILED ❌\n");
            printf("Expected: %s\n", expected9[i]);
            printf("Result: %s\n", res9[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #9 PASSED ✔️\n");

    // Test 10: Single character strings
    er = 0;
    char *str10 = "a,b,c";
    char *charset10 = ",";
    char **res10 = ft_split(str10, charset10);
    char *expected10[] = {"a", "b", "c", 0};
    for (int i = 0; res10[i] != 0; i++) {
        if (strcmp(res10[i], expected10[i]) != 0) {
            er = 1;
            printf("TEST #10 FAILED ❌\n");
            printf("Expected: %s\n", expected10[i]);
            printf("Result: %s\n", res10[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #10 PASSED ✔️\n");

    // Test 11: String starting and ending with valid chars
    er = 0;
    char *str11 = "abc";
    char *charset11 = ",";
    char **res11 = ft_split(str11, charset11);
    char *expected11[] = {"abc", 0};
    for (int i = 0; res11[i] != 0; i++) {
        if (strcmp(res11[i], expected11[i]) != 0) {
            er = 1;
            printf("TEST #11 FAILED ❌\n");
            printf("Expected: %s\n", expected11[i]);
            printf("Result: %s\n", res11[i]);
            break;
        }
    }
    if (er == 0) printf("TEST #11 PASSED ✔️\n");

    if (er == 0) printf("ALL TESTS PASSED ✅\n");
    return 0;
}