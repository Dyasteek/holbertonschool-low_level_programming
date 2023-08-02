#include "main.h"

int
append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i;

    /*Check content file*/
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
    /*Open file*/
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1) /*If it fails*/
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
    /*Write file*/
	status = write(fd, text_content, i);
	if (status == -1) /*If it fails*/
		return (-1);

	close(fd);
	return (1);
}
