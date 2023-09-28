#include "main.h"

/**
 * binary_to_uint - This is what convers a binary number to an unsigned int
 * @b: The string containing the binary number
 * Return: The converted number, or 0 if there is one or
 * more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int val = 0;

	if (!b)
	{
		return (0);
	}

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a > '1'])
		{
			return (0);
		}
		val = 2 * val + (b[a] - '0');
	}

	return (val);
}
