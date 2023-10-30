#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to appends
 * @text_content: content to append to the file
 *
 * Return: 1 (file exist) -1 (finame is NULL), or -1 (no perm)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bwrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	bwrite = write(file_desc, text_content, strlen(text_content));
	if (bwrite == -1)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);
}
