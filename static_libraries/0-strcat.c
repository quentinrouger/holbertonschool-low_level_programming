#include "main.h"
/**
**_strcat - Write a function that concatenates two strings.
*@dest: pointer
*@src: pointer
*
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while ((dest[i] = src[j]) != '\0')
{
i++;
j++;
}
return (dest);
}
