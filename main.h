#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct conv - defines a structure for symbols and functions
 *
 * @dir: The operator
 * @f: The function associated
 */
typedef struct conv
{
	char *dir;
	int (*f)(va_list);

} conv_t;

int _putchar(char c);

/*PrintF Module*/
int _printf(const char *format, ...);
int print_percentage(va_list list);
int (*get_conv_func(char s))(va_list);
#endif
