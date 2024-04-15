#include "search_algos.h"

/**
 * advanced_binary - Recursive binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + (high - low) / 2;
	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);

	if (array[i] >= value)
		return (advanced_binary(array, low, i, value));

	return (advanced_binary(array, i + 1, high, value));
}

