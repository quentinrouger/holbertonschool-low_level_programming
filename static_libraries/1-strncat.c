#include "main.h"
/**
**_strncat - Write a function that concatenates two strings.
*@dest: pointer
*@src: pointer
*@n: number of bytes
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && (dest[i] = src[j]) != '\0')
{
i++;
j++;
}
return (dest);
}
