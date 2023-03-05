#include "main.h"
#include <stddef.h>
/**
*_strstr - scan the occurence all character who is part of 2 and
*return from 1.
*@haystack: is the one who will be scanned
*@needle: search the occurance from all character
*
*Return: null
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
