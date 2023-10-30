#include "main.h"

/**
 * create_file - This is a function that creates a file
 * @filename: The varaible pointer
 * @text_content: This is the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	ssize_t num_byt;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (des == 1)
	{
		return (-1);
	}

	num_byt = write(des, text_content, strlen(text_content));
	close(des);
	return (num_byt == -1 ? -1 : 1);
}

