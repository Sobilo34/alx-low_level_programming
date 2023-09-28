#include "main.h"

/**
 * get_endianness - It is to checkif a machine is a little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *)&k;

	return (*c);
}
