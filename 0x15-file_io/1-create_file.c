#include "main.h"

/**
 * create_file - a function that creates a file.
 * filename: A char refer to the filename
 * text_content: The string
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	/* declare the variables for open, write and length */
	int o,
	    w,
	    strLen = 0; /* counter for letters */

	if (filename == NULL)
		return (-1);

	while (text_content)
		strLen++;
	/* set the values to be read and write */
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, strLen);

	/* check if the open and write doesnot fail */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
