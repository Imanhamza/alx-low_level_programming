#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: The name file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* declare the variables for open, write and length */
	int o,
	    w,
	    strLen = 0, /* counter for letters */
	    i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[strLen]; i++)
			strLen++;
	}
	/* set the values to be read and write */
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strLen);
	/* check if the open and write doesnot fail */
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);

}
