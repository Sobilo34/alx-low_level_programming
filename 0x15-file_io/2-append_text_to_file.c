#include "main.h"

/**
 * append_text_to_file - It is a function that appends text
 * to an existing file
 *  @filename: The name of the existing file
 *  @text_content: The text to ne appended
 *  Return: 1 on success, and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	ssize_t num_byt;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, F_OK) == -1)
	{
		return (-1);
	}
	des = open(filename, O_WRONLY | O_APPEND);
	if (des == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		num_byt = write(des, text_content, len);

		if (num_byt == -1)
		{
			close(des);
			return (-1);
		}
	}
	close(des);
	return (1);
}
