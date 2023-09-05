#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is to copy the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: This will be the array of pointers to the arguments
 * Return: 0 on Success
 *
 * Description: If the argumnets counts is incorrect - exit code is 97
 * But if file_from does not exist or cannot be read - exit code is 98
 * And if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bufa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bufa = create_bufa(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bufa, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: cant't read from file %s\n", argv[1]);
			free(bufa);
			exit(98);
		}

		w = write(to, bufa, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(bufa);
			exit(99);
		}

		r = read(from, bufa, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bufa);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 * create_bufa - This is to allocate 1024 bytes for a buffer
 * @file: This is the name of the file that the buffer will store characters to
 * Return: The ponter to the new-allocated buffer.
 */
char *create_bufa(char *file)
{
	char *bufa;

	bufa = malloc(sizeof(char) * 1024);

	if (bufa == NULL)
	{
		dprintf(STDERR_FILENO, "Errror: can't write to %s\n", file);
		exit(99);
	}

	return (bufa);
}


/**
 * close_file - To close the file descriptors
 * @f: The file descriptors to be closed
 */
void close_file(int f)
{
	int q;

	q = close(f);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", f);
		exit(100);
	}
}
