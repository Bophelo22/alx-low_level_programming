#include <stdio.h>
/**
 * main - start of the program
 * Return: 0 for success
*/
int main(void)
{
char smallLetter = 'a';
char capLetter = 'A';
for (smallLetter; smallLetter <= 'z'; smallLetter++)
{
putchar(smallLetter);
}
while (capLetter <= 'Z')
{
putchar(capLetter);
capLetter++;
}
return (0);
}
