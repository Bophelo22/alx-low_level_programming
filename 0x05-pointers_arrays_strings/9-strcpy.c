#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: to be used to copy to
 * @src: to be used to copy from
 * Return: a string of char
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int x;
while (*(src + i) != '\0')
{
i++;
}
for (x = 0; x < i ; x++)
{
dest[x] = src[x];
}
dest[i] = '\0';
return (dest);
}
