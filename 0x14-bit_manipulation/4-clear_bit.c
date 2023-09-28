#include "main.h"

/**
 * clear_bit - This is to clear the value of a give bit and set it to 0
 * @n: The pointer to the number to be changed
 * @index: The index of the bit to be cleared
 * Return: 1 for Success, -1 for Failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
