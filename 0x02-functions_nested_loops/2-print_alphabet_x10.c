#include "main"

/**
 * print_alphabet_x10(void) - Print lowercase alphbets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'); letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
}
