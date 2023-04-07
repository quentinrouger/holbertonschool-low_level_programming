#include "main.h"
/**
 * flip_bits - unction that sets the value of a bit to 0 at a given index.
 * @n: unsigned int
 * @m: dest int
 * Return: i
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
	}
	return (i);
}
