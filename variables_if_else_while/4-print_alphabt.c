#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Write a program that prints the alphabet in lowercase
*Print all the letters except q and e
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
if (a != 'e' && a != 'q')
{
putchar(a);
}
putchar('\n');
return (0);
}
