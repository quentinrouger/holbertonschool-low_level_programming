#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 *print_strings - print strings followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;
	va_list intarg;

	va_start(intarg, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(intarg, char*);
		if (arg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(intarg);
	printf("\n");
}
