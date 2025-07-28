#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - initializes prototype
 * @filename: given file
 * @letters: number of letters to print
 * Description: takes a text file and prints it
 * Return: 0 if NULL or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wt, ret;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	wt = write(STDOUT_FILENO, buffer, rd);
	if (wt == -1 || wt != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	ret = rd;
	free(buffer);
	close(fd);
	return (ret);
}
