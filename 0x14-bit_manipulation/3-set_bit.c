#include "main.h"

/**
 * set_bit - This wil be used to set a bit at a given iindex to 1
 * @n: The pointer to the number that will be changed
 * @index: The index of the bit to set to 1
 * Return: 1 for Successand -1 for Failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}

