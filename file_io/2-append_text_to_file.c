#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - initializes prototype
 * @filename: file to modify
 * @text_content: content to append
 * Description: takes a file and appends text
 * Return: -1 if it fails, 1 if succeeds
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, appender, permission;

	if (filename == NULL)
		return (-1);
	permission = access(filename, R_OK | W_OK);
	if (permission == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0644);
	if (fd != -1)
	{
		if (text_content != NULL)
		{
			len = strlen(text_content);
			appender = write(fd, text_content, len);
			if (appender != len)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
