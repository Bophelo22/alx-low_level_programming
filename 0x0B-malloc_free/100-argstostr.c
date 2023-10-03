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
int i, n, r, h, l;
r = 0;
l = 0;
i = 0;
h = 0;
n = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
l++;
}
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
{
return (NULL);
}
for (; h < ac; h++)
{ 
for (; av[i][n]; n++)
{
str[r] = av[i][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
