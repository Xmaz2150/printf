#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					i += _char((char)va_arg(ap, int)) + 1;
					break;
				case 's':
					i += _str(va_arg(ap, char*));
					break;
			}
		}
		_putchar(format[i]);
		i++;
	}
	printf("i:%d", i);
	return (i);
}
