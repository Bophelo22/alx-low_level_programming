#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fileData;
int nletters;
int rwr;
nletters = 0;

if (!filename)
{
return (-1);
}
fileData = read(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (!fileData)
{
return (-1);
}
if (!text_content)
{
return (-1);
}
while (text_content[nletters])
{
nletters++;
}
rwr = write(fileData, text_content, nletters);
if (rwr == -1)
{
return (-1);
}
close(fileData);
}
