#include "main.h"

/**
 * print_binary - It prints the binary equivalent of a decimal number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, counts = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}
