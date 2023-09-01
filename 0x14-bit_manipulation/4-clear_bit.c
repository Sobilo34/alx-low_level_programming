#include "main.h"

/**
 * clear_bit - This is to set the value of a given bit to 0
 * @n: The pointer to the nuber to be changed
 * @index: The index of the bit to be cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (-(1UL << index) & *n);
	return (1);
}
