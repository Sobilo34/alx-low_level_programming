#include "search_algos.h"

int exponential_search(int *array, size_t size, int value);
/**
 * exponential_search - The s exponential and binary search algorithms
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int exponential_search(int *array, size_t size, int value)
{
	int i, prev, mid, j;
	int min, max;

	if (!array || size == 0 || value < array[0])
		return (-1);

	for (i = 1, prev = 1; 1; i *= 2)
	{
		if (i >= (int)size || array[i] >= value)
		{
			if (i >= (int)size)
			i = size - 1;
			printf("Value found between indexes [%d] and [%d]\n", prev, i);
			min = prev, max = i;
			while (min <= max)
			{
				mid = (min + max) / 2;

				printf("Searching in array: ");
				for (j = min; j <= max; j++)
				{
					printf("%d", array[j]);
					if (j < max)
						printf(", ");
					else
						printf("\n");
				}

				if (array[mid] == value)
					return (mid);
				else if (array[mid] < value)
					min = mid + 1;
				else
					max = mid - 1;
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		prev = i;
	}
	return (-1);
}
