#include "main.h"

/**
 * flip_bits - Function that returns the num of bits flip to
 * get from one num to another
 * @n: The first number
 * @m: The second number
 * Return: The flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int b = 0;

	a = n ^ m;

	while (a > 0)
	{
		if ((a & 1) != 0)
			b++;

		a = a >> 1;
	}
	return (b);
}


