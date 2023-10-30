#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: string argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t num_byt_read, num_byt_write;
	char bufa[1024];

	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((num_byt_read = read(file_from, bufa, sizeof(bufa))) > 0)
	{
		num_byt_write = write(file_to, bufa, num_byt_read);
		if (num_byt_write == -1)
		{
			close(file_to);
			error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
		if (num_byt_read == -1)
		{
			close(file_from);
			error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		close(file_from);
		close(file_to);
	}
	return (0);
}
/**
 * error_and_exit - This is a function that prints error and exit afterward
 * @a: The program to be exited from
 * @format: The format of the error
 * @arg: The argument passed
 * Return: Void
 */
void error_and_exit(int a, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(a);
}
