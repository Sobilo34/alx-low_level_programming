#include "main.h"

/**
 * append_text_to_file - This is to append a text at the end of a file
 * @filename: THis is the pointer to the name of the file
 * @text_content: This is the string to add to the End of File
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
