#include "main.h"

/**
 * _strlen - This function returns the length of a sring
 * @s: A pointer to the string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

