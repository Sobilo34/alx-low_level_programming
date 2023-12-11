#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the first string.
 * @src: Pointer to the second string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: A pointer to the resulting string in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

