#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: to be used
 * Return: void
 */
void rev_string(char *s)
{
int i;
char reverse = s[0];
int count = 0;
while (s[count] != '\0')
{
count++;
}
for (i = 0; i < count; i++)
{
count--;
reverse = s[i];
s[i] = s[count];
s[count] = reverse;
}
}
