#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Write a program that prints all single digit numbers of base 10
*starting from 0.
*You are not allowed to use any variable of type char.
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
short int n;
for (n = '0'; n <= '9'; n++)
putchar(n);
putchar('\n');
return (0);
}
