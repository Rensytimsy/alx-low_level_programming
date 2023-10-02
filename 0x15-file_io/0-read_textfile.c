#include "main.h"
/**
 *read_textfile - func takes two arguments
 *@filename: file to read and print
 *@letters: number of letters to print
 *Return: number of letters present in a file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fileDes, size;
char *randLetters;
if (filename == NULL)
return (0);
randLetters = malloc(letters * sizeof(char));
if (randLetters == NULL)
return (0);
fileDes = open(filename, O_RDONLY);
if (fileDes == -1)
return (0);
size = write(STDOUT_FILENO, randLetters, read(fileDes, randLetters, letters));
if (size == -1)
return (0);
close(fileDes);
free(randLetters);
return (size);
}
