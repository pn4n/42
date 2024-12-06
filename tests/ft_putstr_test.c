#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putstr(char *str);

void test_putstr(char *test_name, char *str) {
    printf("\nTest: %s\n", test_name);
    ft_putstr(str);
    printf("\n");
}


int main(void) {
    // Test cases
    test_putstr("Normal string", "Hello World");
    test_putstr("Empty string", "");
    test_putstr("Single character", "X");
    test_putstr("Special characters", "!@#$%^&*()");
    test_putstr("Numbers", "12345");
    test_putstr("Spaces", "   ");
    test_putstr("New lines", "Hello\nWorld\n!");
    test_putstr("Tabs", "Hello\tWorld");
    test_putstr("Mixed content", "Hello 123 !@#");
    
    return 0;
}
