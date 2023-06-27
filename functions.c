#include "main.h"

/**
 * _str - prints str
 * @s: Input, str
 *
 * Return: (int) char's printed
 */

int _str(char *s)
{
	int i;

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
 * @c: Input, char
 *
 * Return: (int) char's printed
 */

int _char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * _num - prints nums
 * @n: Input, num
 *
 * Return: (int) char's printed
 */
int _num(int n)
{
	char str[1000];

	sprintf(str, "%d", n);
	return (_str(str));
}

/**
 * _num_binary - prints nums in binary
 * @n: Input, num
 *
 * Return: (int) char's printed
 */
int _num_binary(int n)
{
	int bin[64];
	int i, j;

	i = 0;
	while (n > 0)
	{
		bin[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_num(bin[j]);

	return (i);
}
