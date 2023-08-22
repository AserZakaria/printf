#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int i;

	p_buff = conv_num_to_string(va_arg(list, unsigned int), 2);

	for (i = 0; p_buff[i] != '\0'; i++)
		_putchar(p_buff[i]);
	return (i);
}
