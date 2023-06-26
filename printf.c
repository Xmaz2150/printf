#include "main.h"

int is_match(const char* s, const char c)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int _printf(const char *format, ...)
{
	int i, len;
	va_list ap;
	const char* c = "csdi";

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
					i += 2;
					len += _char((char)va_arg(ap, int));
					break;
				case 's':
					i += 2;
					len +=  _str(va_arg(ap, char*));
				case 'd':
					i += 2;
					len += _num(va_arg(ap, int));
					break;
				case 'i':
                                        i += 2;
                                        len += _num(va_arg(ap, int));
                                        break;
				case '%':
					i += 2;
				 	len += _char('%');
					if (is_match(c, format[i + 1]))
							_char(format[i + 1]);
					break;
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	printf("\ni:%d\n", len);
	return (i);
}
