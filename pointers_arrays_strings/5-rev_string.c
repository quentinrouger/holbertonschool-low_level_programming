#include "main.h"
/**
*rev_string - Write a function that reverses a string.
*@s: pointer
*/
void rev_string(char *s)
{
int i, j, k, tab;
i = 0;
while (s[i] != '\0')
{
i++;
}
k = 0;
j = i - 1;
while (k < j)
{
tab = s[k];
s[k] = s[j];
s[j] = tab;
k++;
j--;
}
}
