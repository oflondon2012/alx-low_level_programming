#include "main.h"
/**
 * copy_file - function that copy file to another file
 * @file_from: from where to copy from
 * @file_to: the desctination to copy to
 * @argv: the argument vector
 *
 * Return: void
 */
void copy_file(int file_from, int file_to, char *argv[])
{
	char buffer[1024];
	ssize_t numchar, numwr;

	numchar = 1024;
	while (numchar == 1024)
	{
		numchar = read(file_from, buffer, 1024);
		if (numchar == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
			exit(98);
		}
		numwr = write(file_to, buffer, numchar);
		if (numwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
}
/**
 * main - program that copy content of a file to another
 * @argc: number of argument
 * @argv: array of argument value
 *
 * Return: (0) on success
 */
int main(int argc, char **argv)
{
	int file1, file2, erclose;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		exit(99);
	}
	copy_file(file1, file2, argv);
	erclose = close(file1);
	if (erclose == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	erclose = close(file2);
	if (erclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
