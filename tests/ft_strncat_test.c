#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);  // Your function prototype

int test_strncat(char *test_name, char *dest, char *src, unsigned int n, int buffer_size) {
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
    
    if (strcmp(expected, result) == 0){
   		printf("✅ Test passed!\n");
		return 1;
	}
    else
        printf("❌ Test failed!\n");
	return 0;
}

int main(void) {
    char dest1[50] = "Hello ";
    char dest2[50] = "";
    char dest3[50] = "Test";
    char dest4[50] = "A";
    char dest5[50] = "Complete ";
    int tests_passed = 0;
    int total_tests = 6;
    int res; 
    // Test 1: Normal case with full length
    res = test_strncat("Normal concatenation", dest1, "World!", 6, 50);
	tests_passed += res;
    
    // Test 2: Empty destination
    res = test_strncat("Empty destination", dest2, "Hello", 5, 50);
	tests_passed += res;
    
    // Test 3: Empty source
    res = test_strncat("Empty source", dest3, "", 5, 50);
	tests_passed += res;
    
    // Test 4: Single character
    res = test_strncat("Single character append", dest4, "B", 1, 50);
	tests_passed += res;
    
    // Test 5: Partial string (n less than src length)
    res = test_strncat("Partial string concatenation", dest5, "String!", 3, 50);
	tests_passed += res;
    
    // Test 6: n greater than src length
    char dest6[50] = "Test";
    res = test_strncat("n > src length", dest6, "ing", 10, 50);
	tests_passed += res;
    
    // Final results
    printf("\n=========================\n");
    printf("Final Results: %d/%d tests passed\n", tests_passed, total_tests);
    if (tests_passed == total_tests)
        printf("🎉 All tests passed successfully!\n");
    else
        printf("❌ Some tests failed.\n");
    
    return 0;
}
