#include <stdio.h>

int ft_str_is_alpha(char *str);
int ft_isalpha(char *str);

#ifdef ft_isalpha
    int (*fun_ptr)(char *) = &ft_isalpha;

	int ft_str_is_alpha(char *str) {(void)str; return 0;}
#else
    int (*fun_ptr)(char *) = &ft_str_is_alpha;
	
	int ft_isalpha(char *str) {(void)str;return 0;}
#endif
// int (*fun_ptr)(char *);

void test_str_is_alpha(char *test_name, char *str, int expected) {
    int result = fun_ptr(str);
    if (result != expected) {
        printf("\n❌ Test failed: %s\n", test_name);
        printf("String  : \"%s\"\n", str);
        printf("Expected: %d\n", expected);
        printf("Result  : %d\n", result);
    } else {
        printf("✅ Test: %s\n", test_name);
    }
}

int main(void) {
	test_str_is_alpha("Only letters", "Hello", 1);
    test_str_is_alpha("With numbers", "Hello123", 0);
    test_str_is_alpha("Empty string", "", 1);
    test_str_is_alpha("Special chars", "Hello!", 0);
    return 0;
}
