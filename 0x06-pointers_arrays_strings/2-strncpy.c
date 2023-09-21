#include "main.h"
/**
* _strncpy - function that copies a string.
* @dest: to be used
* @src: to be used
* @n: input value to be used
**
Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
