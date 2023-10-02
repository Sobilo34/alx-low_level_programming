#include "main.h"

/**
 * create_file - This is used for creating a file
 * @filename: This is a pointer to the name of the file to be created
 * @text_content: This is a pointer to a string to write to the file
 * Return: -1 If the function fails, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, leng = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
