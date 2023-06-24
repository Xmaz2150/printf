#include "main.h"

int _printf(const char *format, ...)
{
	int i, len;
	va_list ap;

	va_start(ap, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					len += _putchar((char)va_arg(ap, int));
					i += 2;
					len -= 2;
					break;
				case 's':
					len += _str(va_arg(ap, char*));
					i += 2;
					len -= 2;
					break;
			}
		}
		_putchar(format[i]);
		i++;
	}
	printf("i+len:%d", i+len);
	return (i+len);
}
