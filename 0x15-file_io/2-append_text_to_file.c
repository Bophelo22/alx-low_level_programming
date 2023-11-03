#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content:  the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fileData;
int nletters;
int rwr;
nletters = 0;

if (!filename)
{
return (-1);
}

fileData = open(filename, O_WRONLY | O_APPEND);

if (fileData == -1)
{
return (-1);
}

if (text_content)
{
while (text_content[nletters])
{
    nletters++;
}
rwr = write(fileData, text_content, nletters);

if (rwr == -1)
{
    return (-1);
}
}

close(fileData);

return (1);
}
