#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		purchar(n);
		if (n != 57)
		{
			purchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
