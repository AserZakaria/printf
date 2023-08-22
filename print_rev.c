#include "main.h"
/**
 * print_rev - prints a string, to stdout
* @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_rev(va_list list)
{
	int longi = 0;
	int x;
	char *s;

	s = va_arg(list, char*);
	while (*s != '\0')
	{
		s++;
		longi++;
	}
	s--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*s--);
	}
	return (longi);
}
