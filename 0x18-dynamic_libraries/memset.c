#include "main.h"

/**
 * _memset - This is a function that fills memory with a constant byte.
 * @s: The ointer to the memory to be filled.
 * @b: The byte to fill the memory with.
 * @n: Number of bytes to fill.
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		s[idx] = b;

	return (s);
}

