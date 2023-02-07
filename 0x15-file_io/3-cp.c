#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r, w, m, n, x;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r = open(argv[1], O_RDONLY);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(r, buffer, BUFSIZ)) > 0)
	{
		if (w == -1 || write(w, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(r);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(r);
	n = close(w);
	if (m == -1 || n == -1)
	{
		if (m == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r);
		if (n == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
		return (100);
	}
	return (0);
}
