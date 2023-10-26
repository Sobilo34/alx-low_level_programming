#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: The value of bit to be cleared
 * @index: The index of bits
 * Return:  if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
