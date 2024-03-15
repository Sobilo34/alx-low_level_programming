#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(*s);

	for (*s = 0; *s >= 0; s++)
	{
		for (i < len; i >= 0; i--)
			putchar(*s);
	}
	purchar('\n');
}
