#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define OUTPUT_BUY_SIZE 1024
#define BUF_FLUSH -1

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

/* Print_functions.c MODULE */
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);

/*PrintF Module*/
int _printf(const char *format, ...);
int print_percentage(va_list list);
int (*get_conv_func(char s))(va_list);
#endif
