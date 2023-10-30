#include "main.h"
/**
 *read_textfile - function takes two args filename and letters
 *@filename: Name of the file
 *@letters: letter from a file
 *Return: size of the buffer
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, size;
char *buffer;

if (filename == NULL)
return (0);
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
size = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));
if (size == -1)
return (0);
close(fd);
free(buffer);
return (size);
}
