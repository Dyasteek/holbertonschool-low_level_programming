#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - initializes prototype
 * @filename: pointer to file
 * @text_content: is the content of new file
 * Description: takes a filename and content and creates new file
 * Return: -1 if fails, 1 if succeeds
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, f_write;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		f_write = write(fd, text_content, len);
		if (f_write != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
