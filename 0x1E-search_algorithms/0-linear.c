#include "search_algos.h"

/**
 * linear_search - A funcion that searches for a value in
 * an array of integers using linear search algorithm
 * @array: The array of integers
 * @size: The size/legnth of the array
 * @value: The content/indexes of the array
 * Return: It return -1 if their is no value or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			return (value);
		}
	}
	return (-1);
}
