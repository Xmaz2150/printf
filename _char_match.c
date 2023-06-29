#include "main.h"

/**
 * _is_match - checks if:
 * @c: Input, char matches with chars in:
 * @s: Input, str
 *
 * Return: (int) 0 if true
 */

int _is_match(const char *s, const char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _str2 - prints str
 * @s: Input, str
 *
 * Return: (int) char's printed
 */

int _str2(char *s)
{
	int i;

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
 * _num2 - prints nums
 * @n: Input, num
 *
 * Return: (int) char's printed
 */
int _num2(int n)
{
	char str[1000];

	sprintf(str, "%d", n);
	return (_str2(str));
}

