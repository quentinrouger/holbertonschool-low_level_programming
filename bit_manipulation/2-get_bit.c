#include "main.h"
/**
 * get_bit - return the bit
 * @n: unsigned int
 * @index: index
 * Return: the value of the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n)))
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
