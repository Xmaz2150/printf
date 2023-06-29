#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <limits.h>

typedef const char c_ch;

/**
 * struct op - Struct op
 *
 * @c: character
 * @f: The function associated
 */
typedef struct op
{
	char c;

	int (*f)(va_list ap);
}
op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _str(va_list ap);
int _char(va_list ap);
int _num(va_list ap);
int _num_binary(va_list ap);

int _str2(char *s);
int _num2(int n);
int _sum_digit(int n);
int _is_match(const char *s, const char c);
void _move_str_ptr(const char **ptr);
#endif /*MAIN_H*/
