#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int number = 42;

    /* Using %d specifier */
    printf("Decimal: %d\n", number);

    /* Using %i specifier */
    printf("Interpreted as decimal: %i\n", number);

    /* Using %i specifier for hexadecimal */
    printf("Interpreted as hexadecimal: %i\n", 0x2A);

    /* Using %i specifier for octal */
    printf("Interpreted as octal: %i\n", 052);

    return 0;
}
