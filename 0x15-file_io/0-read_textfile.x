#include "main.h"

/**
 * read_textfile - reads and prints content of a file
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: Number of chars printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, retval, tmp;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	tmp = read(fd, buff, letters);
	retval = write(1, buff, tmp);
	free(buff);
	if (fd == -1 || tmp == -1 || retval == -1 || retval != tmp)
		return (0);
	close(fd);
	return (retval);
}
