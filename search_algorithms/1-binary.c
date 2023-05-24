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
	int low, mid, high;
	int i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		mid = low + (high - low) / 2;

		for (i = low; i <= high; i++)
		{
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		}

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
