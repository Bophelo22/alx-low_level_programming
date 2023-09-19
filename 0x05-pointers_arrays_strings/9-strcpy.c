#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
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
