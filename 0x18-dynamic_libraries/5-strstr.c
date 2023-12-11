#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: input to be used
 * @needle: input to be used
 * Return: Always 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *hy = haystack;
char *nd = needle;
while (*hy == *nd && *nd != '\0')
{
hy++;
nd++;
}
if (*nd == '\0')
return (haystack);
}
return (0);
}
