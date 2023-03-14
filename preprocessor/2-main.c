#include "main.h"
#include <stdio.h>

/**
*main - print the name of the fil it was compiled from
*
*Return: 0
*/
int main(void)
{
const char *filename = __FILE__;
while (*filename != '\0')
{
putchar(*filename);
filename++;
}
putchar('\n');
return 0;
}
