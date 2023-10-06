#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to be used
 * @s2: string to be used
 * @n: length of bytes
 * Return: concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strResults;
unsigned int i, j, s1len, s2len;
i = 0;
j = 0;
s1len = 0;
s2len = 0;
while (s1 && s1[s1len])
{
s1len++;
}
while (s2 && s2[s2len])
{
s2len++;
}
if (n >= s2len)
{
strResults = malloc(sizeof(*strResults) * (s1len + n + s2len + 1));
}
else
{
strResults = malloc(sizeof(*strResults) * (s1len + s2len + 1));
}
if (strResults == NULL)
{
return (NULL);
}
while (i < s1len)
{
strResults[i] = s1[i];
i++;
}
while (j < n && s2[j])
{
strResults[i] = s2[j];
i++;
j++;
}
strResults[i] = '\0';
return (strResults);
}
