#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * main - initiliazes function
 * @argc: arguments count
 * @argv: pointer to arguments string array
 * Description: takes arguments and copies file contents based on input names
 * Return: 97, 98, 99, 100 if fails EXIT_SUCCESS otherwise
 */
int main(int argc, char *argv[])
{
	int org_fd, dest_fd, nread, nwrite;
	char buffer[BUFFER_SIZE];
	char *org_file, *dest_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	org_file = argv[1];
	dest_file = argv[2];
	org_fd = open(org_file, O_RDONLY);
	if (org_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", org_file);
		exit(98);
	}
	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	nread = read(org_fd, buffer, BUFFER_SIZE);
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", org_file);
		exit(98);
	}
	while (nread > 0)
	{
		nwrite = write(dest_fd, buffer, nread);
		if (nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
		nread = read(org_fd, buffer, BUFFER_SIZE);
		if (nread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", org_file);
			exit(98);
		}
	}
	if (close(org_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", org_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
