#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int low, i, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}
