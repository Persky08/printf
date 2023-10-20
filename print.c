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
		*format == '%' ?
			(format++, *format == 'c' ? (putchar(va_arg(args, int)), count++) :
				*format == 's' ? (count += printf("%s", va_arg(args, char *))) :
					(putchar('%'), putchar(*format), count += 2)) :
			(putchar(*format), count++);

		format++;
	}

	va_end(args);
	return count;
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

	return 0;
}
