#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

void test_strstr(char *test_name, char *str, char *to_find) {
    char *expected = strstr(str, to_find);
    char *result = ft_strstr(str, to_find);
    
    printf("\nTest: %s\n", test_name);
    printf("String: \"%s\"\n", str);
    printf("To find: \"%s\"\n", to_find);
    printf("Expected: %s\n", expected ? expected : "NULL");
    printf("Result  : %s\n", result ? result : "NULL");
    
    if ((expected == NULL && result == NULL) || 
        (expected != NULL && result != NULL && strcmp(expected, result) == 0))
        printf("✅ Test passed!\n");
    else
        printf("❌ Test failed!\n");
}

int main(void) {
//    int tests_passed = 0;
//    int total_tests = 6;
    
    test_strstr("Normal case", "Hello World", "World");
    test_strstr("Empty needle", "Hello World", "");
    test_strstr("Not found", "Hello World", "Goodbye");
    test_strstr("Multiple occurrences", "hello hello hello", "hello");
    test_strstr("Substring in middle", "Hello World Hello", "World");
    test_strstr("Empty haystack", "", "test");
    
    printf("\n=========================\n");
    printf("Tests completed!\n");
    return 0;
}
