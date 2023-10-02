#include "main.h"

/**
 * create_file - function that create a file
 * @filename: string pointer
 * @text_content: content to write into the file
 *
 * Return: 1 on success -1 on failure otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int sdr, ncontent, dfile;

	if (filename == NULL)
		return (-1);
	dfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (dfile == -1)
	{
		close(dfile);
		return (-1);
	}
	if (!text_content)
		text_content = "";
	for (ncontent = 0; text_content[ncontent]; ncontent++)
		;
	sdr = write(dfile, text_content, ncontent);
	if (sdr == -1)
	{
		close(sdr);
		return (-1);
	}
	close(dfile);
	return (1);
}
