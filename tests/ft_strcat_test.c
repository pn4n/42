#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);  // Your function prototype

int test_strcat(char *test_name, char *dest, char *src, int buffer_size) {
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
    int tests_passed = 0;
    int total_tests = 4;
	int res;
    
    // Test 1: Normal case
    res = test_strcat("Normal concatenation", dest1, "World!", 50);
    tests_passed += res;
    
    // Test 2: Empty destination
    res = test_strcat("Empty destination", dest2, "Hello", 50);
    tests_passed += res;
    
    // Test 3: Empty source
    res = test_strcat("Empty source", dest3, "", 50);
    tests_passed += res;
    
    // Test 4: Single character
    res = test_strcat("Single character append", dest4, "B", 50);
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
