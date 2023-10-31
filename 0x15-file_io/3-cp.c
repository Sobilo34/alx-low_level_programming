#include "main.h"
#include <stdio.h>

/**
* error_file - This is a program that checks if files can be opened
* @file_to: file to
* @file_from: file from
* @argv: argument vector
* Return: nothing
*/
void handle_error(int file_from, int file_to, char *argv[])
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
* main - This is the entry point of functions
* @argv: The string of argument
* @argc: argument number
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t num_byt_read, num_byt_write;
	char bufa[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error(file_from, file_to, argv);

	num_byt_read = 1024;
	while (num_byt_read == 1024)
	{
		num_byt_read = read(file_from, bufa, 1024);
		if (num_byt_read == -1)
			handle_error(-1, 0, argv);
		num_byt_write = write(file_to, bufa, num_byt_read);
		if (num_byt_write == -1)
			handle_error(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
