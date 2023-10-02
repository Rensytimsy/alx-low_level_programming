#include "main.h"
/**
 *create_file - func takes two arguments
 *@filename: the file to be created
 *@text_content: what will be written
 *Return: text in the created file
*/

int create_file(const char *filename, char *text_content)
{
int fileDes, size, i;
char *randLetters;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
fileDes = open(filename, O_CREAT, 0600);
if (fileDes == -1)
return (-1);
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
;
randLetters = malloc(i * sizeof(char));
if (randLetters == NULL)
return (-1);
fileDes = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fileDes == -1)
return (-1);
size = write(fileDes, text_content, i);
if (size == -1)
return (-1);
close(fileDes);
free(randLetters);
return (1);
}
