#include "main.h"
/**
 *main - is the main function
 *Description: This function runs the elefs header files
 *@argc: count of arguments
 *@argv: arguments passed
 *Return: 0 success
*/
int main(int argc, char *argv[])
{
int fileDes;
ssize_t size;
char buf[5];
char elf[1];
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: cp file\n");
exit(97); }
fileDes = open(argv[1], O_RDWR);
if (fileDes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
exit(98); }
size = read(fileDes, buf, 4);
if (size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
size = lseek(fileDes, 1, SEEK_SET);
size = read(fileDes, elf, 1);
if (elf[0] != 'E')
exit(98);
close(fileDes);
return (0);
}
