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
	int file_from, file_to, close_error;
	char buff[1024];
	ssize_t sdw, cha;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1 || file_to == -1)
		error_handling_file(file_from, file_to, argv);
	cha = 0;
	while ((cha = read(file_from, buff, sizeof(buff))) >= 0)
	{
		if (cha == -1)
			error_handling_file(-1, 0, argv);
		sdw = write(file_to, buff, cha);
		if (sdw == -1)
			error_handling_file(0, -1, argv);
		if (cha == 0)
			break;
	}

	close_error = close(file_from);
	if (close_error == -1)
		error_handling_file(-1, 0, argv);
	close_error = close(file_to);
	if (close_error == -1)
		error_handling_file(0, -1, argv);
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
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
