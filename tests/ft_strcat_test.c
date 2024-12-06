#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);  // Your function prototype

void test_strcat(char *test_name, char *dest, char *src, int buffer_size) {
    char expected[256];
    char result[256];
    
    // Copy initial dest to both buffers
    strncpy(expected, dest, buffer_size);
    strncpy(result, dest, buffer_size);
    
    // Perform both operations
    strcat(expected, src);
    ft_strcat(result, src);
    
    // Compare and print results
    printf("\nTest: %s\n", test_name);
    printf("Source: \"%s\"\n", src);
    printf("Expected: \"%s\"\n", expected);
    printf("Result  : \"%s\"\n", result);
    
    if (strcmp(expected, result) == 0)
        printf("✅ Test passed!\n");
    else
        printf("❌ Test failed!\n");
}

int main(void) {
    char dest1[50] = "Hello ";
    char dest2[50] = "";
    char dest3[50] = "Test";
    char dest4[50] = "A";
    int tests_passed = 0;
    int total_tests = 4;
    
    // Test 1: Normal case
    test_strcat("Normal concatenation", dest1, "World!", 50);
    if (strcmp(dest1, "Hello World!") == 0) tests_passed++;
    
    // Test 2: Empty destination
    test_strcat("Empty destination", dest2, "Hello", 50);
    if (strcmp(dest2, "Hello") == 0) tests_passed++;
    
    // Test 3: Empty source
    test_strcat("Empty source", dest3, "", 50);
    if (strcmp(dest3, "Test") == 0) tests_passed++;
    
    // Test 4: Single character
    test_strcat("Single character append", dest4, "B", 50);
    if (strcmp(dest4, "AB") == 0) tests_passed++;
    
    // Final results
    printf("\n=========================\n");
    printf("Final Results: %d/%d tests passed\n", tests_passed, total_tests);
    if (tests_passed == total_tests)
        printf("🎉 All tests passed successfully!\n");
    else
        printf("❌ Some tests failed.\n");
    
    return 0;
}
