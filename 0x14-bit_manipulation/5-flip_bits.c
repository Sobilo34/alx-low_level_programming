#include "main.h"

/**
 * flip_bits - It counts the number of bit to be changed
 * to get one number to another number
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bit to changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counts = 0;
	unsigned long int current;
	unsigned long int exclude = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclude >> a;
		if (current & 1)
			counts++;
	}

	return (counts);
}
