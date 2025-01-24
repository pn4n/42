#include <stdio.h>

#ifdef ISAL
    int ft_isalpha(char *str);
    int (*fun_ptr)(char *) = &ft_isalpha;
#else
    int ft_str_is_alpha(char *str);
    int (*fun_ptr)(char *) = &ft_str_is_alpha;
#endif

void run_test(char *test_name, char *str, int expected) {
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
	run_test("Only letters", "Hello", 1);
    run_test("With numbers", "Hello123", 0);
    run_test("Empty string", "", 1);
    run_test("Special chars", "Hello!", 0);
    return 0;
}
