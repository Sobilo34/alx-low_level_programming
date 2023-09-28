#include "main.h"

/**
 * flip_bit - This is to count the number of bits to be
 * changed to get one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bit changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int counts = 0;
	unsigned long int current;
	unsigned long int except = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = except >> a;
		if (current & 1)
			counts++;
	}

	return (counts);
}
