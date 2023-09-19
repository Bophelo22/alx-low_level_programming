#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: to be used
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int j = 0;
char *k = str;
int h;
while (*k != '\0')
{
k++;
i++;
}
j = i - 1;
for (h = 0 ; h <= j ; h++)
{
if (h % 2 == 0)
{
_putchar(str[h]);
}
}
_putchar('\n');
}
