#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);  // Your function prototype

void test_strncat(char *test_name, char *dest, char *src, unsigned int n, int buffer_size) {
    char expected[256];
    char result[256];
    
    // Copy initial dest to both buffers
    strncpy(expected, dest, buffer_size);
    strncpy(result, dest, buffer_size);
    
    // Perform both operations
    strncat(expected, src, n);
    ft_strncat(result, src, n);
    
    // Compare and print results
    printf("\nTest: %s\n", test_name);
    printf("Source: \"%s\", n: %u\n", src, n);
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
    char dest5[50] = "Complete ";
    int tests_passed = 0;
    int total_tests = 6;
    
    // Test 1: Normal case with full length
    test_strncat("Normal concatenation", dest1, "World!", 6, 50);
    if (strcmp(dest1, "Hello World!") == 0) tests_passed++;
    
    // Test 2: Empty destination
    test_strncat("Empty destination", dest2, "Hello", 5, 50);
    if (strcmp(dest2, "Hello") == 0) tests_passed++;
    
    // Test 3: Empty source
    test_strncat("Empty source", dest3, "", 5, 50);
    if (strcmp(dest3, "Test") == 0) tests_passed++;
    
    // Test 4: Single character
    test_strncat("Single character append", dest4, "B", 1, 50);
    if (strcmp(dest4, "AB") == 0) tests_passed++;
    
    // Test 5: Partial string (n less than src length)
    test_strncat("Partial string concatenation", dest5, "String!", 3, 50);
    if (strcmp(dest5, "Complete Str") == 0) tests_passed++;
    
    // Test 6: n greater than src length
    char dest6[50] = "Test";
    test_strncat("n > src length", dest6, "ing", 10, 50);
    if (strcmp(dest6, "Testing") == 0) tests_passed++;
    
    // Final results
    printf("\n=========================\n");
    printf("Final Results: %d/%d tests passed\n", tests_passed, total_tests);
    if (tests_passed == total_tests)
        printf("🎉 All tests passed successfully!\n");
    else
        printf("❌ Some tests failed.\n");
    
    return 0;
}
