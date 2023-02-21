#include "main.h"
/**
*times_table - Write a function that prints the 9 times table, starting with 0.
*
*Return: Always 0 (Success)
*/
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
int result = i * j;
if (result <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(result + '0');
}
else
{
_putchar(44);
_putchar(32);
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
