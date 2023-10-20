#include "main.h"

int _print(const char *format, ...)
{
	int length = 0, len;
	va_list args;
	char *str, c;

	if (format == NULL)
		return (1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			length++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				length++;
			}
			else if (*format == 'c')
			{
				c = va_arg(arg, int);
				write(1, &c, 1);
				length++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				len = 0;
				while (str[len] != '\0')
					len++;
				write(1, str, len);
				length += len;
			}
		}
		format++;
	}
	va_end(args);
}
