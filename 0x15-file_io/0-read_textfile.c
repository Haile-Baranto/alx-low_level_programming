#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: files name to be manipulated
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	read_count = read(fd, buff, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buff, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);
	free(buff);

	close(fd);
	return (write_count);
}
