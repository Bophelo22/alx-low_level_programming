#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: pointer to be used
 * Return: Awlays 0 for success, otherwise failed
*/
char *_strdup(char *str)
{
char *Str;
int i, j;
i = 0;
j = 0;
if (str == NULL)
{
return (NULL);
}
for (; str[i] != '\0'; i++)
{
Str = malloc(sizeof(*str) * (i + 1));
}
if (Str == NULL)
{
return (NULL);
}
for (; str[j]; j++)
{
Str[j] = str[j];
}
return (Str);
}
