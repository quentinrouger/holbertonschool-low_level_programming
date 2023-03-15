#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
**str_concat - Write a function that concatenates two strings.
*@s1: pointer to a string
*@s2: pointer to a string
*Return: pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j, k, len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (s1 != NULL && s2 != NULL)
{
len = strlen(s1);
len = len + strlen(s2);
}
s = malloc((len) +1);
if (s == NULL)
{
return (NULL);
}
i = 0;
if (s1 != NULL)
for (j = 0; s1[j]; j++)
{
s[i] = s1[j];
i++;
}
if (s2 != NULL)
for (k = 0; s2[k]; k++)
{
s[i] = s2[k];
i++;
}
return (s);
}
