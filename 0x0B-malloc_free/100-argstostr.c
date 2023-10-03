#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: to used to count
 * @av: to be used for values
 * Return: Alwasy 0 for success
*/
char *argstostr(int ac, char **av)
{
int i, j, r, l,h;
r = 0;
l = 0;
i = 0;
j = 0;
h = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
for (; av[i][j]; j++)
l++;
}l
+= ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (; h < ac; h++)
{ for (
j
=
0; av[i][j]; j++)
{
str[r] = av[i][j];
r++;
} if (
str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
