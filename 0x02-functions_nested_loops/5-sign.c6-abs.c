#include "main.h"
/**
 * print_sign - Prints the sign of a numver
 *
 * @n: the int to check
 *
 * Return: 1 and prints + if n is greater than zero
 *
 * 0 and prins 0 if n is zero
 *
 * -1 and prints - if n ls less than zero
 */
int prints_sign(int n)
{
	if (n > 0)
	{
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(',');
	}
	return (-1);
}
