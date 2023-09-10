#include <stdio.h>

/**
 * main - the start of the execution
 * Return: 0 for success
 */

int main(void)
{
char letter = 'a';
for (letter; letter <= 'z'; letter++)
{
if ((letter != 'q') && (letter != 'e'))
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
