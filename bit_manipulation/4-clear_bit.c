#include "main.h"
/**
 * clear_bit - unction that sets the value of a bit to 0 at a given index.
 * @n: unsigned int
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)))
	{
		return (-1);
	}
	else
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
}
