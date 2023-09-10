#include <stdio.h>

/**
 * main - the start of the execution
 * Return: 0 for success
*/
int main(void)
{
char reverse = 'z';
for (reverse; reverse >= 'a'; reverse--)
{
putchar(reverse);
}
putchar('\n');
}
