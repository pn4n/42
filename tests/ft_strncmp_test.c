#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n);

int test_ft_strncmp() {
    // Ordinary tests
    char test1a[] = "abc";
    char test1b[] = "abc";
    if (ft_strncmp(test1a, test1b, 3) != 0) {
        printf("Test 1 Failed: Expected 0, Got %d\n", ft_strncmp(test1a, test1b, 3));
        return 0;
    }

    char test2a[] = "abc";
    char test2b[] = "abcd";
    if (ft_strncmp(test2a, test2b, 3) != 0) {
        printf("Test 2 Failed: Expected 0, Got %d\n", ft_strncmp(test2a, test2b, 3));
        return 0;
    }

    char test3a[] = "abcd";
    char test3b[] = "abc";
    if (ft_strncmp(test3a, test3b, 3) != 0) {
        printf("Test 3 Failed: Expected 0, Got %d\n", ft_strncmp(test3a, test3b, 3));
        return 0;
    }

    // Tricky tests
    char test4a[] = "abc";
    char test4b[] = "ABC"; // Case sensitivity
    if (ft_strncmp(test4a, test4b, 3) <= 0) {
        printf("Test 4 Failed: Expected a positive value, Got %d\n", ft_strncmp(test4a, test4b, 3));
        return 0;
    }

    char test5a[] = "abc";
    char test5b[] = "abcd";
    if (ft_strncmp(test5a, test5b, 2) != 0) {
        printf("Test 5 Failed: Expected 0, Got %d\n", ft_strncmp(test5a, test5b, 2));
        return 0;
    }

    char test6a[] = "";
    char test6b[] = "";
    if (ft_strncmp(test6a, test6b, 1) != 0) {
        printf("Test 6 Failed: Expected 0, Got %d\n", ft_strncmp(test6a, test6b, 1));
        return 0;
    }

    char test7a[] = "";
    char test7b[] = "non-empty";
    if (ft_strncmp(test7a, test7b, 1) >= 0) {
        printf("Test 7 Failed: Expected a negative value, Got %d\n", ft_strncmp(test7a, test7b, 1));
        return 0;
    }

    return 1; // All tests passed
}

int main() {
    if (test_ft_strncmp()) {
        printf("All tests passed!\n");
    }
    return 0;
}
