#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, low, high;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);

		else if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
