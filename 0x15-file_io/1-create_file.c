#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the name of the file to create
 * @text_content: pointer to the content of the file
 *
 * Return: 1 (success0) -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bwrite;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		bwrite = write(file_desc, text_content, strlen(text_content));
		if (bwrite == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
