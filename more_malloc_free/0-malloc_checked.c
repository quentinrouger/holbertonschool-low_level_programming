#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
**malloc_checked - allocate memory
*@b: size of memory
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
void *i;
i  = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
