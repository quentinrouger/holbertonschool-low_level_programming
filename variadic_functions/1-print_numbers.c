#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
*print_numbers - print numbers
*@separator: string to be printed between numbers
*@n: number of integers
*
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list param;
unsigned int i;
va_start(param, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(param, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(param);
printf("\n");
}
