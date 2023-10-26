#include "main.h"

/**
 * get_endianness - This is a function that checks the endianess
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int k = 1;

	char *c = (char *)&k;

	if (*c)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
