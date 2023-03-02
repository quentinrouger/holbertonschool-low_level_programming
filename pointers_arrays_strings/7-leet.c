#include "main.h"
/**
**leet - Write a function that encodes a string into 1337.
*@s: string
*
*Return: s
*/
char *leet(char *s)
{
int i = 0, j;
char letter[] = "aAeEoOtTlL";
char num[] = "4433007711";
while (s[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (letter[j] == s[i])
{
s[i] = num[j];
}
}
i++;
}
return (s);
}
