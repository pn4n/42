#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2);

int test_ft_strcmp() {
    // Ordinary tests
	int res = 1;
    char test1a[] = "abc";
    char test1b[] = "abc";
    if (ft_strcmp(test1a, test1b) != 0) {
        printf("Test 1 Failed: Expected 0, Got %d\n", ft_strcmp(test1a, test1b));
        res = 0;
    }

    char test2a[] = "abc";
    char test2b[] = "abcd";
    if (ft_strcmp(test2a, test2b) >= 0) {
        printf("Test 2 Failed: Expected a negative value, Got %d\n", ft_strcmp(test2a, test2b));
        res = 0;
    }

    char test3a[] = "abcd";
    char test3b[] = "abc";
    if (ft_strcmp(test3a, test3b) <= 0) {
        printf("Test 3 Failed: Expected a positive value, Got %d\n", ft_strcmp(test3a, test3b));
        res = 0;
    }

    // Tricky tests
    char test4a[] = "";
    char test4b[] = "";
    if (ft_strcmp(test4a, test4b) != 0) {
        printf("Test 4 Failed: Expected 0, Got %d\n", ft_strcmp(test4a, test4b));
        res = 0;
    }

    char test5a[] = "";
    char test5b[] = "non-empty";
    if (ft_strcmp(test5a, test5b) >= 0) {
        printf("Test 5 Failed: Expected a negative value, Got %d\n", ft_strcmp(test5a, test5b));
        res = 0;
    }

    char test6a[] = "non-empty";
    char test6b[] = "";
    if (ft_strcmp(test6a, test6b) <= 0) {
        printf("Test 6 Failed: Expected a positive value, Got %d\n", ft_strcmp(test6a, test6b));
        res = 0;
    }

    char test7a[] = "abc";
    char test7b[] = "ABC"; // Case sensitivity
    if (ft_strcmp(test7a, test7b) <= 0) {
        printf("Test 7 Failed: Expected a positive value, Got %d\n", ft_strcmp(test7a, test7b));
        res = 0;
    }

    return res; // All tests passed
}

int main() {
    if (test_ft_strcmp()) {
        printf("All tests passed!\n");
    }
    return 0;
}
