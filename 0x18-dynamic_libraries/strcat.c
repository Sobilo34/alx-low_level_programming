#include "main.h"

/**
 * _strcat - This is a function that will be used for
 * concatenation of strings
 * @dest: This is the string to append to another
 * @src: This is the string to be appended to
 * Return: A pointer/address of the added strings
 *
 */

char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (result);
}
