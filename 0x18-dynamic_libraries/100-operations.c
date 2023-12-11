#include "main.h"

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of a minus b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * sb_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of a divided by b
 */

int sb_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of the division of a by b
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulus by zero\n");
		return (0);
	}
}
