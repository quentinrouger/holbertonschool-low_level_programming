#include "main.h"
/**
*print_rev - Write a function that prints a string,
*in reverse, followed by a new line.
*@s: pointer
*Return: Always 0 (Success)
*/
void print_rev(char *s)
{
int i = 0;
int j = 0;
while (s[i] != '\0')
{
i++;
}
j = j + 1;
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
