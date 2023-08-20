#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */


int _printf(const char *format, ...)
{
	int i, size, r_size;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	size = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (get_conv_func(format[i + 1]) == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					size = size + 2;
					i++;
					continue;
				}
				else
					return (-1);
			}
			r_size = get_conv_func(format[i + 1])(list);
			if (r_size == -1)
				return (-1);
			size += r_size;
			i++;
		}
		else
		{
			_putchar(format[i]);
			size++;
		}
	}
	va_end(list);
	return (size);
}

