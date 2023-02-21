#include "main.h"
/**
*_islower - Write a function that checks for lowercase character.
*@c: the character to be checked
*
*Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
