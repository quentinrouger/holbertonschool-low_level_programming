#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Write a program that prints the alphabet in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
