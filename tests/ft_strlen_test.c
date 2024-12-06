#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

void test_strlen(char *test_name, char *str) {
    int expected = strlen(str);
    int result = ft_strlen(str);
    
    if (expected != result) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("String: \"%s\"\n", str);
        printf("Expected length: %d\n", expected);
        printf("Result length  : %d\n", result);
    } else {
        printf("✅ ");
    }
}


int main(void) {
    // Test cases
    test_strlen("Normal string", "Hello World");
    test_strlen("Empty string", "");
    test_strlen("Single character", "a");
    test_strlen("Special characters", "!@#$%^&*()");
    test_strlen("Numbers", "12345");
    test_strlen("Spaces", "   ");
    test_strlen("Mixed content", "Hello 123 !@#");
    
    return 0;
}
