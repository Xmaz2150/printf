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
