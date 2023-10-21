#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string with optional conversion specifiers
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...);

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c);

#endif /* MAIN_H */

