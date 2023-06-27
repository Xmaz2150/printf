#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int len_n;
    int len2_n;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("\n");

    len_n = _printf("Negative:[%d]\n", -762534);
    len2_n = printf("Negative:[%d]\n", -762534);
    _printf("Len:[%d]\n", len_n);
    printf("Len:[%d]\n", len2_n);
    _printf("\n");

    len_n = _printf("Character:[%c]\n", 'H');
    len2_n = printf("Character:[%c]\n", 'H');
    _printf("Len:[%d]\n", len_n);
    printf("Len:[%d]\n", len2_n);
    _printf("\n");

    len_n = _printf("String:[%s]\n", "I am a string !");
    len2_n = printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len_n);
    printf("Len:[%d]\n", len2_n);
    _printf("\n");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    _printf("\n");
    len = _printf("%b\n", 98);
    _printf("Len:[%d]\n", len);
    return (0);
}
