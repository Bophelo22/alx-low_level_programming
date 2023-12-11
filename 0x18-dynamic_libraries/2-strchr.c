#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer s to be used
 * @c: the charecter to be used
 * Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
int i;
i = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
return (0);
}
}
