#include "main.h"
/**
*puts_half - Write a function that prints half of a string,
*followed by a new line.
*@str: pointer
*/
void puts_half(char *str)
{
int s, i;
s = 0;
while (str[s] != '\0')
{
s++;
}
if (s % 2 != 0)
{
s = (s + 1) / 2;
}
else
{
s = s / 2;
}
while (str[s] != '\0')
{
i = str[s];
s++;
_putchar(i);
}
_putchar('\n');
}
