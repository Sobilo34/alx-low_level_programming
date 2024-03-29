#include <stdio.h>
/**
 * main - main block
 * Description: Program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2 followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%lu ", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
