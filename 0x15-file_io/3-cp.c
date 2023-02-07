#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments
 * @argv: list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, w,
	    m, n;

	/* check th number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* read the file and check if it opens or not */
	r = open(argv[1], O_RDONLY);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return(98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (w == -1)
	{
		dprintf(STDERR, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	m = close(r);
	n = close(w);
	if (m == -1 || n == -1)
	{
		if (m == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (n == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		return (100);
	}
	return (0);
}
