#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
**array_range - create an array of integer
*@min: min
*@max: max
*Return: pointer or NULL
*/
int *array_range(int min, int max)
{
int range, i;
int *arr;
if (min > max)
return (NULL);
range = max - min;
arr = malloc(sizeof(int) * (range + 1));
if (arr == NULL)
return (arr);
for (i = 0; i < range; i++)
arr[i] = i + min;
arr[range] = max;
return (arr);
}
