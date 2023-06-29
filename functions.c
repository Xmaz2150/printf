#include "main.h"

/**
 * _str - prints str
 * @ap: Input, str
 *
 * Return: (int) char's printed
 */

int _str(va_list ap)
{
	int i;
	char *s;

	s = va_arg(ap, char*);
	if (s == NULL)
		return (_printf("(null)"));
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * _char - prints char
 * @ap: Input, char
 *
 * Return: (int) char's printed
 */

int _char(va_list ap)
{
	char c;

	c = (char)va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 * _num - prints nums
 * @ap: Input, num
 *
 * Return: (int) char's printed
 */
int _num(va_list ap)
{
	char str[1000];
	int n;

	n = va_arg(ap, int);
	sprintf(str, "%d", n);
	return (_str2(str));
}

/**
 * _num_binary - prints nums in binary
 * @ap: Input, num
 *
 * Return: (int) char's printed
 */
int _num_binary(va_list ap)
{
	int bin[64];
	int64_t i, j, n;

	n = va_arg(ap, int64_t);
	if (n == 0)
	{
		_nums2(0);
	}
	i = 0;
	while (n > 0)
	{
		bin[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_num2(bin[j]);

	return (i);
}
