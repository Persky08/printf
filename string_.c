#include "main.h"
/**
 * print_string - a function that prints strings
 * @args: argument
 * @x: lenght of string
 * @ptr: pointer to the string
 * Return: length of the string
 * */

int print_string(va_list, args)
{
	int x;
	char *ptr;

	ptr = va_arg(args char*);
	x = 0;
	while (str[x] != '\0')
		x++;
	write(1, ptr, x);
	
}
