#include "main.h"
/**
*print_last_digit - Write a function that prints the last digit of a number.
*@n: number
*
*Return: the value of the last digit
*/
int print_last_digit(int n)
{
int last;
if (n > 0)
last = n % 10;
else
last = (n % 10) * -1;
_putchar('0' + last);
return (last);
}

