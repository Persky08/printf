#include "main.h"

/**
 * _printf - a function that produces output according to format
 * @format: format of the input
 * Return: the number of string
 */

int _printf(const char *format, ...)
{
	int string = 0, x;
	va_list args;
	char *ptr;
	char str;

	if (format == NULL)/* if the string is empty return -1*/
		return (-1);

	va_start(args, format);/* starting to go through the string*/

	while (*format)/* a while loop to go through the string*/
	{
		if (*format != %)/* if not a % sign, putchar output */
		{
			write(1, format, 1);
			string++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				string++;
			}
			else if (*format == 'c')
			{
				str = va_arg(args, int);
				write(1, &str, 1);
				string++;
			}
			else if (*format == 's')
			{
				print_string(va_list, args);
				string = string + ;
			}
		}
		format++;
	}
	va_end(args);
	return (string);
}
