#include "main.h"
/**
*_isalpha - Write a function that checks for alphabetic character.
*@c: charachter to be checked
*
*Return: 1 if c is a letter, lowercase or uppercase. Otherwise 0
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
return (0);
}
