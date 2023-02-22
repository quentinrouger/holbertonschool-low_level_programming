#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Write a function that prints all natural numbers from n to 98
*@n: number
*
*Return: Always 0 (Success)
*/
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf("%c", 44);
printf("%c", 32);
}
else
{
printf("\n");
}
}
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf("%c", 44);
printf("%c", 32);
}
else
{
printf("\n");
}
}
}
else
{
printf("%d\n", n);
}
}
