#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void test_strncpy(char *test_name, char *src, unsigned int n) {
    char expected[256] = {0};
    char result[256] = {0};
    
    strncpy(expected, src, n);
    ft_strncpy(result, src, n);
    
    if (memcmp(expected, result, n) != 0) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("Source: \"%s\", n: %u\n", src, n);
        printf("Expected: ");
        for (unsigned int i = 0; i < n; i++)
            printf("%c", expected[i] ? expected[i] : '0');
        printf("\nResult  : ");
        for (unsigned int i = 0; i < n; i++)
            printf("%c", result[i] ? result[i] : '0');
        printf("\n");
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
    test_strncpy("Basic copy", "Hello", 5);
    test_strncpy("Partial copy", "Hello", 3);
    test_strncpy("Copy with null padding", "Hi", 5);
    test_strncpy("Empty string", "", 3);
    test_strncpy("Zero length", "Hello", 0);
    return 0;
}
