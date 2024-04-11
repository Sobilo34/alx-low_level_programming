#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * in a sorted array of integers using nterpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double formula;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		formula = (((double)(high - low) / (array[high] - array[low]))
						* (value - array[low]));
		pos = (size_t)(low + formula);

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
