#include "main.h"
/**
 *append_text_to_file - takes two arguments
 *@filename: file to append text to
 *@text_content: Text to be appended
 *Return: text appended
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fileDes, size, i;
char *randLetters;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
for (i = 0; text_content[i] != '\0'; i++)
;
randLetters = malloc(i * sizeof(char));
if (randLetters == NULL)
return (-1);
fileDes = open(filename, O_RDWR | O_APPEND);
if (fileDes == -1)
return (-1);
size = write(fileDes, text_content, i);
if (size == -1)
return (-1);
close(fileDes);
free(randLetters);
return (1);
}