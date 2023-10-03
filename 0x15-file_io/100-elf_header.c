#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - This is to check if file is availble for opening
 * @file_from: The file from which reading happens
 * @file_to: The file to write to
 * @argv: The argument
 * Return: Nothing
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - This is to check for Holberbon School sudent
 * @argc:The number of arguments
 * @argv: The arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t nuchar, nr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_fromm file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nuchar = 1024;
	while (nuchar == 1024)
	{
		nuchar = read(file_from, buffer, 1024);
		if (nuchar == -1)
			error_file(-1, 0, argv);
		nr = write(file_to, buffer, nuchar);
		if (nr == -1)
			error_file(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	}
	return (0);
}
