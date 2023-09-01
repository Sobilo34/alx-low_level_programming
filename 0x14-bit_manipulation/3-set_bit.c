#include "main.h"

/**
 * set_bit - This sis to set a bit at a give index to 1
 * @n: THe pointer to the number to be changed
 * @index: The index of the bit to  set to 1
 *
 * Return: 1 for Success, -1 for Failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
