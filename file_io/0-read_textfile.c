#include "main.h"

ssize_t
read_textfile(const char *filename, size_t letters)
{
	int desc, cont;
	char *buff;

	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		return (1);
	}
	if (filename == NULL)
	{
		return (0);
	}
	desc = open(filename, O_RDONLY);
	if (desc == -1)
	{
		free(buff);
		return (0);
	}
	cont = read(desc, buff, letters);
	if (cont == -1)
	{
		free(buff);
		return (0);
	}
	write(STDOUT_FILENO, buff, cont);
	close(desc);
	free(buff);
	return (cont);
}
