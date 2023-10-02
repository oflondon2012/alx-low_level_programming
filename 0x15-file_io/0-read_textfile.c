#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: a pointer to string
 * @letters: number of what get printed
 *
 * Return: the actual number if letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int i;
	ssize_t srd, srw;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(i);
		return (0);
	}
	srd = read(i, buf, letters);
	if (srd == -1)
	{
		close(i);
		free(buf);
		return (0);
	}
	srw = write(STDOUT_FILENO, buf, srd);
	if (srw == -1)
	{
		close(i);
		free(buf);
		return (0);
	}
	close(i);
	free(buf);
	return (srw);
}
