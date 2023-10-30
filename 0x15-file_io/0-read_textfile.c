#include "main.h"

/**
 * read_textfile - This funtion reads a text file and prints it to the
 * POSIX standard output.
 * @filename: it's a pointer to file
 * @letters: The number of bytes of the characters in the file.
 * Return: return the charcaters read to std. ouput.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *text;

	text = malloc(letters);
	if (text == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	rd = read(file, text, letters);

	wr = write(STDOUT_FILENO, text, rd);

	close(file);

	return (wr);
}
