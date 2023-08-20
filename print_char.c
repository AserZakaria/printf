#include "main.h"

/**
 * print_char - Prints a charcter
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
