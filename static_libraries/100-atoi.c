#include "main.h"
/**
*_atoi - Write a function that convert a string to an integer.
*@s: pointer
*
*Return: total
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int total = 0;
char work = 0;
while (*s)
{
if (*s == '-')
sign = sign * -1;
if (*s >= '0' && *s <= '9')
{
work = 1;
total = total * 10 + *s - '0';
}
else if (*s < '0' || *s > '9')
{
if (work)
break;
}
s++;
}
if (sign < 0)
total = (-(total));
return (total);
}
