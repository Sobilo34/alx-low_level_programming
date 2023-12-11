#include "main.h"

/**
 * _strchr - This is to locate a character in a string
 * @s: The pointer to a string
 * @c: The haracter to search for
 *
 * Return: Pointer to the first occurrence of the character, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}

	return (*s == c ? s : NULL);
}

