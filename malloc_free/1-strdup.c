#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
**_strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: string
*Return: pointer or NULL
*/
char *_strdup(char *str)
{
char *str2;
unsigned int size = 0, i;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
size++;
}
str2 = malloc(sizeof(char) * (size + 1));
if (str2 == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
str2[i] = str[i];
}
return (str2);
}
