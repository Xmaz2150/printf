#include "main.h"

void _printf_sos(int *l, c_ch *c, c_ch **f_add, c_ch cc, c_ch cc1, va_list ap);
/**
 * _printf - prints all
 * @format: Input, str
 *
 * Return: (int) chars printed
 */

int _printf(const char *format, ...)
{
	int i, len, new_i, new_l, tot;
	va_list ap;
	c_ch *c = "csdi";

	va_start(ap, format);
	i = 0;
	len = 0;

	while (*format != '\0')
	{

		if (*format == '%')
			_printf_sos(&len, c, &format, *(format + 1), *(format + 2), ap);
		else
		{
			_putchar(*format);
			i++;
		}
		_move_str_ptr(&format);
	}
	new_i = i;
	new_l = len;
	tot = new_i + new_l;
	return (tot);
}

/**
 * _printf_sos - _printf helper function
 * @l: len return by each arg after printing
 * @c: list of our specifiers
 * @f_add: Input, add of main str
 * @cc: Input, 1st char after %
 * @cc1: Input, 2nd char after %
 * @ap: Input variable args
 *
 * Return: none
 */

void _printf_sos(int *l, c_ch *c, c_ch **f_add, c_ch cc, c_ch cc1, va_list ap)
{
	(void) cc;
	switch (cc)
	{
		case 'c':
			_move_str_ptr(f_add);
			*l += _char((char)va_arg(ap, int));
			break;
		case 's':
			_move_str_ptr(f_add);
			*l +=  _str(va_arg(ap, char*));
			break;
		case 'd':
		case 'i':
			_move_str_ptr(f_add);
			*l += _num(va_arg(ap, int));
			break;
		case 'b':
			_move_str_ptr(f_add);
			*l += _num_binary(va_arg(ap, int));
			break;
		case '%':
			*l += _char('%');
			if (_is_match(c, cc1))
				_char(cc1);
			break;
	}
}
