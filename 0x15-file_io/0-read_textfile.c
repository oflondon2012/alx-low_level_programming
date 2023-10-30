#include "main.h"

/**
 * read_textfile - function that read a text file and print to Posix
 * @filename: name of the file to process
 * @letters: number of what to read & write
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t tread = 0, btread, bread, bwrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (letters > 0)
	{
		btread = (letters < sizeof(buffer)) ? letters : sizeof(buffer);
		bread = read(fd, buffer, btread);
		if (bread <= 0)
			break;
		bwrite = write(STDOUT_FILENO, buffer, bread);
		if (bwrite != bread)
		{
			close(fd);
			return (0);
		}
		tread += bread;
		letters -= bread;
	}
	close(fd);
	return (tread);
}
