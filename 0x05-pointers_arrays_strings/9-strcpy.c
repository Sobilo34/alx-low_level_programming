#include "main.h"

/**
 * _strcpy - copies the string pointed to by scr
 * @dest: destination
 * @scr: source
 * Return: string
 */
char *_strcpy(char *dest, char *scr)
{
	int len = 0;

	while (*(scr + len) != '\0')
	{
		*(dest + len) = *(scr + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
