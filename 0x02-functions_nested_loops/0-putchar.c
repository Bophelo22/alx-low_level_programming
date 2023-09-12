#include <stdio.h>
/**
 * main - 0. _putchar
 * Return: 0 for success
*/

int main(void)
{
char letters[] = "_putchars";
int i;
for (i = 0; i <= sizeof(letters); i++)
{
putchar(letters[i]);
}
putchar('\n');
return (0);
}
