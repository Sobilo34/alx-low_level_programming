#include "search_algos.h"

/**
 * jump_search - A dunction that uses Jump search algorithm to search in a 
 * an array of sorted integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int jump_search(int *array, size_t size, int value)
{
	int block, block_size;
	int i = 0, holder = 0;

	if (array == NULL || size == 0)
		return (-1);

	block = sqrt((int)size);
	block_size = block;

	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[i] == value || array[block] == value)
			break;
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + block_size;
	}
	printf("Value found between indexes [%d] and [%d]\n", holder, block);

	while (holder <= block)
	{
		if (holder >= (int)size)
			return (-1);

		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

		if (array[holder] == value)
			return (holder);
		holder++;
	}

	return (-1);
}
