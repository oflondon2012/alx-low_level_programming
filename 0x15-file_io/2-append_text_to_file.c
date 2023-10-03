#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to a filename
 * @text_content: content to add at the end of file
 *
 * Return: 1 on success and -1 on faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dfile, swr, ncontent = 0;

	if (filename == NULL)
		return (-1);
	dfile = open(filename, O_WRONLY | O_APPEND);
	if (dfile == -1)
	{
		close(dfile);
		return (-1);
	}
	if (text_content)
	{
		while (text_content[ncontent])
			ncontent++;
		swr = write(dfile, text_content, ncontent);
		if (swr == -1)
		{
			close(dfile);
			return (-1);
		}
	}
	close(dfile);
	return (1);
}
