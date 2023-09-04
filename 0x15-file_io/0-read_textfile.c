#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This is to read text file print to STDOUT.
 * @filename: The text file ro be read
 * @letters: The number of letters to be read
 * Return: W- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufa;
	ssize_t f;
	ssize_t w;
	ssize_t r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bufa = malloc(sizeof(char) * letters);
	r = read(f, bufa, letters);
	w = write(STDOUT_FILENO, bufa, r);

	free(bufa);
	close(f);
	return (w);
}
