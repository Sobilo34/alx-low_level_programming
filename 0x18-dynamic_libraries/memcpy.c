#include "main.h"

/**
 * _memcpy - To Copy memory area.
 * @dest: The pointer to the memory area to be filled.
 * @src: The pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		dest[idx] = src[idx];

	return (dest);
}
