#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: to be used to copy to
 * @src: to copy from 
 * @n: the size of bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
