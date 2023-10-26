#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 characters
 * Return: The number converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int idx = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '0' || b[idx] == '1')
		{
			result = (result << 1) | (b[idx] - '0');
		}

		else
			return (0);
	}
	return result;
}
