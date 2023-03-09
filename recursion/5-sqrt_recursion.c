#include "main.h"
/**
*check - check recursion
*@i: variable
*@j: variable
*Return: 0 or -1
*/
int check(int i, int j)
{
if ((j * j) == i)
{
return (j);
}
if ((j * j) > i)
{
return (-1);
}
return (check(i, j + 1));
}
/**
*_sqrt_recursion - Write a function that returns the natural
*squareroot of a number.
*@n: variable
*
*Return: root of n otherwise -1 if false
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (check(n, 1));
}
