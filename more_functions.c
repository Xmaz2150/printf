#include "main.h"

/**
 * _num_octal - prints nums
 * @ap: Input, num
 *
 * Return: (int) char's printed
 */
int _num_octal(va_list ap)
{
	long int n, i, j;
	int oct[64];

	n = va_arg(ap, long int);
	i = 0;
	while (n > 0)
	{
		oct[i] = n % 8;
		n /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_num2(oct[j]);
	return (i);
}
	
/**
 * _num - prints nums
 * @ap: Input, num
 *
 * Return: (int) char's printed
 */
int _num_hex(va_list ap)
{
	long int n;
	char str[32];

	n = va_arg(ap, long int);
	sprintf(str, "%lx", n);
	return (_str2(str));
}

/**
 * _num - prints nums
 * @ap: Input, num
 *
 * Return: (int) char's printed
 */
int _num_hex_u(va_list ap)
{
	long int n;
	char str[32];

	n = va_arg(ap, long int);
	sprintf(str, "%lX", n);
	return (_str2(str));
}
