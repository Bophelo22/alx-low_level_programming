#include <stdio.h>
/**
 * main - where the execution start
 * Return: 0 for success
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
