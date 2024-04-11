#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the value in the array, or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	int block = sqrt(size);
	int block_size = block;
	int holder = 0;

	if (!array || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[holder] == value || array[block] == value)
			break;
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block += block_size;
	}

	printf("Value found between indexes [%d] and [%d]\n", holder, block);

	while (array[holder] < value)
	{
		if (holder >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		holder++;
	}

	if (array[holder] == value)
		return (holder);

	return (-1);
}

