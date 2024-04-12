#include "search_algos.h"

int bin_search(int *array, int min, int max, int value);

/**
 * binary_search_mod - Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @min: Lower bound of the search range
 * @max: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int bin_search(int *array, int min, int max, int value)
{
	int mid = (max + min) / 2;
	int i;

	if (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] > value)
			return (bin_search(array, min, mid - 1, value));
		else if (array[mid] < value)
			return (bin_search(array, mid + 1, max, value));

		return (mid);
	}
	return (-1);
}

/**
 * exponential_search - Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int exponential_search(int *array, size_t size, int value)
{
	int i, prev;

	if (!array || size == 0 || value < array[0])
		return (-1);

	for (i = 1, prev = 1; 1; i *= 2)
	{
		if (i >= (int)size || array[i] >= value)
		{
			if (i >= (int)size)
				i = size - 1;
			printf("Value found between indexes [%d] and [%d]\n", prev, i);

			return (bin_search(array, prev, i, value));
		}

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		prev = i;
	}
	return (-1);
}
