#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase,
* and then in uppercase.
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
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
