#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void test_strlcat(char *test_name, char *dest, char *src, unsigned int size) {
    char expected[256] = {0};
    char result[256] = {0};
    
    strncpy(expected, dest, sizeof(expected));
    strncpy(result, dest, sizeof(result));
    
    size_t expected_len = strlcat(expected, src, size);
    unsigned int result_len = ft_strlcat(result, src, size);
    
    printf("\nTest: %s\n", test_name);
    printf("Source: \"%s\", size: %u\n", src, size);
    printf("Expected string: \"%s\", length: %zu\n", expected, expected_len);
    printf("Result string  : \"%s\", length: %u\n", result, result_len);
    
    if (strcmp(expected, result) == 0 && expected_len == result_len)
        printf("✅ Test passed!\n");
    else
        printf("❌ Test failed!\n");
}

int main(void) {
    char dest1[50] = "Hello ";
    char dest2[50] = "";
    char dest3[5] = "Test";
    char dest4[20] = "Hello";
    char dest5[20] = "Complete";
    
    test_strlcat("Normal case", dest1, "World!", 50);
    test_strlcat("Empty destination", dest2, "Hello", 50);
    test_strlcat("Size smaller than dest", dest3, "ing", 3);
    test_strlcat("Exact size", dest4, " World", 11);
    test_strlcat("Size larger than needed", dest5, " String", 20);
    
    printf("\n=========================\n");
    printf("Tests completed!\n");
    return 0;
}
