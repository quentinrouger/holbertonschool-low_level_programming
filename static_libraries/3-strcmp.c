#include "main.h"
/**
*_strcmp - Write a function that compares two strings.
*@s1: string 1
*@s2: string 2
*
*Return: differences between strings
*/
int _strcmp(char *s1, char *s2)
{
int i, output;
i = 0;
while (*(s1 + i) == *(s2 + i) &&*(s1 + i) != '\0')
{
i++;
}
output = (*(s1 + i) -*(s2 + i));
return (output);
}
