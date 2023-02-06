#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: Number of letters
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare the variable for open read and write*/
	 /* calls and the buffer for letters*/
	ssize_t o,
		r,
		w;
	char *buffer;

	/* return 0 if the filename can't be opened */
	if (filename == NULL)
		return (0);

	/* Allocate the memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* set the values of open read and write */
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	/* check every call is return its susseful value */
	if (o != 1 || r != 1 || w != 1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
