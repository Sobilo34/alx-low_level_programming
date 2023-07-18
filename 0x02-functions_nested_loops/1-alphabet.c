#include "main.h"
#include <unlstd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
