#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sum of all the parameters
*@n: argument
*
*Return: if n = 0 return 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list param;
unsigned int i;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(param, n);
for (i = 0; i < n; i++)
{
sum += va_arg(param, int);
}
va_end(param);
return (sum);
}
