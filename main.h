#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef const char c_ch;

int _printf(const char *format, ...);
int _putchar(char c);
int _str(char* s);
int _char(char c);
int _num(int i);
int _num_binary(int n);

/**
 * helper functions
 */

int _sum_digit(int n);
int _is_match(const char *s, const char c);
void _move_str_ptr(const char **ptr);
#endif /*MAIN_H*/
