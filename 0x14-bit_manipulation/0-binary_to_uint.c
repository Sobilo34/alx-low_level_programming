#include "main.h"

/**
 * binary_to_uint - It convets a binaty num to unsigned int
 * @b: THe string containing the binary num
 *
 * Return: The converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int de_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		de_val = 2 * de_val + (b[a] - '0');
	}

	return (de_val);
}
