#include <stdio.h>

/**
 * main - the start of the execution
 * Return: 0 for success
 */

int main(void)
{char letter = 'a';
char endLetter = 'z';
for (letter; letter <= endLetter; letter++)
{
if ((letter != 'q') && (letter != 'e'))
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
