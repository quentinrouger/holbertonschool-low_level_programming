#include <stdio.h>
/**
*main - Write a program that prints the numbers from 1 to 100,
*print Fizz for
*multiples of 3 and Buzz for multiples of 5. FizzBuzz for both multiples.
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d", n);
printf(" ");
}
}
return (0);
}
