/* main.h */
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

#endif /* MAIN_H */

/* main.c */
#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format specifier.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);
putchar(c);
					count++;
					break;
				}
				case 's':
				{
					char *str = va_arg(args, char *);

					while (*str)
					{
						putchar(*str);
						str++;
						count++;
					}
					break;
				}
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);
	return (count);
}

/**
 * main - Example usage of _printf.
 *
 * Return: Always 0.
 */
int main(void)
{
	int result = _printf("Hello, %c! This is a %s example.%%\n", 'W', "printf");
printf("Number of characters printed: %d\n\n", result);

	return (0);
}

