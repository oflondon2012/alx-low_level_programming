#include "main.h"
#include <stdio.h>
void error_handling_file(int file_from, int file_to, char *argv[]);
/**
 * main - Program that copies the content of a file to another file
 * @argc: count of argument
 * @argv: vector of argument
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buff[1024];
	ssize_t cha, sdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_handling_file(file_from, file_to, argv);
	while ((cha = read(file_from, buff, sizeof(buff))) > 0)
	{
		sdw = write(file_to, buff, cha);
		if (sdw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (cha == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * error_handling_file - function that check if a file can
 * be opened or closed and handle errors
 * @file_from: pointing to name of file
 * @file_to: either close  or open
 * @argv: vector argument
 *
 * Return: void
 */
void error_handling_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
