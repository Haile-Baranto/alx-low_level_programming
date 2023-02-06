#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to be added at the end of file filename
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;
	status = write(fd, text_content, count);
	if (status == -1)
		return (-1);

	close(fd);
	return (1);
}
