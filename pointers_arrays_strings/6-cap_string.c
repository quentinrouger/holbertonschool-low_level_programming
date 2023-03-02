#include "main.h"
/**
**cap_string - Write a function that capitalizes all words of a string.
*@s: string
*
*Return: s
*/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 || s[i - 1] == 33 ||
s[i - 1] == 63 || s[i - 1] == 34 || s[i - 1] == 41 || s[i - 1] == 123 ||
s[i - 1] == 125) && (s[i] >= 97 && s[i] <= 122))
{
s[i] = s[i] - 32;
}
else if (i == 0 && (s[i] >= 97 && s[i] <= 122))
{
s[i] = s[i] - 32;
}
}
return (s);
}
