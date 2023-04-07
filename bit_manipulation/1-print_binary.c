#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: string
 *
 */
void print_binary(unsigned long int n)
{
	int i;

	i = ((n & 1) + '0');
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(i);
}
