#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_char - print char
 *@arguments: arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - integers
 * @arguments: arguments
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - float
 * @arguments: arguments
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - string
 * @arguments: arguments
 */

void print_string(va_list arguments)
{
	char *args = va_arg(arguments, char*);

	if (args == NULL)
	{
		printf("%p", args);
		return;
	}
	printf("%s", args);
}

/**
*print_all - print anything
*@format: a list of types of arguments passed to the function
*
*Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *comma = "";
	va_list arguments;
	v_types print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(arguments, format);

	j = 0;

	while (format && format[j])
	{
		i = 0;
		while (print[i].all)
		{
			if (print[i].all == format[j])
			{
				printf("%s", comma);
				print[i].func(arguments);
				comma = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arguments);
}
