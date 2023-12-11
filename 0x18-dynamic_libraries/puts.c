#include "main.h"

/**
 * _puts - It writes a character or value to the stdout
 * @s: The character to be written
 */
void _puts(char *s)
{
	write(1, s, strlen(s));
}
