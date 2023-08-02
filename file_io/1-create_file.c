#include "main.h"

int
create_file(const char *filename, char *text_content)
{
int fd, write_f;

if (!filename)
{
return (-1);
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1) /*If it fails*/
{
return (-1);
}
if (!text_content)
{
return (1);
}
/*Write file*/
write_f = write(fd, text_content, strlen(text_content));
close(fd);
if (write_f == -1) /*If it fails*/
{
close(fd); /*Close file*/
return (-1);
}
return (1);
}
