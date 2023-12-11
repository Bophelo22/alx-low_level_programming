#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: input to be used
 * @accept: input to be used
 * Return: Alwat 0 for success
*/

char *_strpbrk(char *s, char *accept)
{
int i;
i = 0;
for (; s[i != '\0']; i++)
{
if (s[i] == accept[i])
return (s);
}
return (0);
}
