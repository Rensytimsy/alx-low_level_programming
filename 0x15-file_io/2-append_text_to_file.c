#include "main.h"
/**
 *append_text_to_file - takes two arguments filename and text_content
 *@filename: The name of the file
 *@text_content: Text present in a file
 *Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, size, i;
char *buffer;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
for (i = 0; text_content[i] != '\0'; i++)
;
buffer = malloc(i * sizeof(char));
if (buffer == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
size = write(fd, text_content, i);
if (size == -1)
return (-1);
close(fd);
free(buffer);
return (1);
}
