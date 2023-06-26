#include "main.h"

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

int _char(char c)
{
	_putchar(c);
	return (1);
}

int _num(int i)
{
	printf("%d", i);
	return (2);
}
