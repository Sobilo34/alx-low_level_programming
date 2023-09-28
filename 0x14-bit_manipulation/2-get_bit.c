#include "main.h"

/**
 * get_bit - This is to return the value of a bit in an index in decimal
 * @n: The number to be examined
 * @index: The index of the bit
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index > 63)
	{
		return (-1);
	}

	val_of_bit = (n >> index & 1);

	return (val_of_bit);
}
