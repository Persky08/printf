#include "main.h"

/**
 * print_char - a function that prints character
 * @args: arguments
 * Return: 1
 */
int print_char(va_list args)
{
	char b;

	b = va_arg(args, int);
	_putchar(b);
	return (1);
}
