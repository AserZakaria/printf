#include"main.h"
/**
 * get_conv_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_conv_func(char s))(va_list)
{
	conv_t conv[] = {
		{"%", print_percentage},
		{"c", print_char},
		{"s", print_string},
		/*Add other handle functions here*/
		/*Got your note*/
		{"d", print_int},
		{"i", print_int},
	};

	int i = 0;

	while (conv[i].dir != NULL && *(conv[i].dir) != s)
		i++;

	return (conv[i].f);
}
