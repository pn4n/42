#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);
void test_ft_print_memory() {
    char test1[] = "Bonjour les amis.";
    ft_print_memory(test1, strlen(test1));
    printf("\n");

    char test2[] = "Hello, World!";
    ft_print_memory(test2, strlen(test2));
    printf("\n");

    char test3[] = "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x10\x11\x12\x13\x14\x15\x16";
    ft_print_memory(test3, 16);
    printf("\n");

    char test4[] = "This is a very long string that should be displayed on multiple lines.";
    ft_print_memory(test4, strlen(test4));
    printf("\n");

    char test5[] = "";
    ft_print_memory(test5, strlen(test5));
    printf("\n");

    printf("All tests passed!\n");
}

int main() {
    test_ft_print_memory();
    return 0;
}