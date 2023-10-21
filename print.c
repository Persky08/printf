#include <stdio.h>
#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string containing directives
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0; /* Count of characters printed */

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; /* Move past the '%' */
            switch (*format)
            {
            case 'c':
                /* Print character */
                count += printf("%c", va_arg(args, int));
                break;
            case 's':
                /* Print string */
                count += printf("%s", va_arg(args, char *));
                break;
            case '%':
                /* Print '%' */
                count += printf("%%");
                break;
            default:
                /* Invalid specifier, just print the character */
                count += printf("%%%c", *format);
            }
        }
        else
        {
            /* Regular character, print it */
            putchar(*format);
            count++;
        }

        format++; /* Move to the next character in the format string */
    }

    va_end(args);

    return count;
}

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
    int result = _printf("This is a test: %c, %s, %%\n", 'A', "Hello, World!");
    printf("Number of characters printed: %d\n", result);

    return 0;
}

