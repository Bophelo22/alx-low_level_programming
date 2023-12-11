#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: to be used
 * Return: length of the string
 */
int _strlen(char *s)
{
int countString = 0;

for (; *s != '\0'; s++)
{
countString++;
}
return (countString);
}
