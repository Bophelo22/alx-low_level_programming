#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: the file name to be used
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fileData;
ssize_t nrd, nwr;
char *buf;

if (!filename)
{   
return (0);
}
fileData = open(filename, O_RDONLY);
if (fileData == -1)
{   
return (0);
}
buf = malloc(sizeof(char) * (letters));
if (!buf)
{
close(fileData);
return (0);
}
nrd = read(fileData, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fileData);
free(buf);
return (nwr);
}
