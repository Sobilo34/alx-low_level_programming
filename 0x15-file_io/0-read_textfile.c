#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - This is to read text file print to STDOUT.
 * @filename: The text file ro be read
 * @letters: The number of letters to be read
 * Return: The actual number of bytes read and printed
 *  and 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a;
	ssize_t r;
	ssize_t w;

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(a, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(a);
	return (w);
}


