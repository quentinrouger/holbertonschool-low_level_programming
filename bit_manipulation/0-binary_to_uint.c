#include "main.h"
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, add;

	add = 0;
	if (b != NULL)
	{
		for (i = 0 ; b[i] != '\0' ; i++)
		{
			if (b[i] != 48 && b[i] != 49)
			{
				return (0);
			}
		}

		for (j = 0, i-- ; i >= 0 ; i--)
		{
			add = add + ((b[i] - '0') << j);
			j++;
		}
	}
	else
	{
		return (0);
	}
	return (add);
}
