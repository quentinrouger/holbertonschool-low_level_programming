#include "main.h"
/**
*check - if it's a prime number
*@i: variable
*@j: variable
*Return: 0 or -1
*/
int check(int i, int j)
{
if (i <= 0 || i % j == 0 || i == 1)
{
return (0);
}
else if (i > j / 2)
{
return (1);
}
else
{
return (check(i, j + 1));
}
}
/**
*is_prime_number - return 1 if prime number otherwise 0
*@n: variable
*
*Return: 1 if prime number otherwise 0
*/
int is_prime_number(int n)
{
int a = 2;
return (check(n, a));
}
