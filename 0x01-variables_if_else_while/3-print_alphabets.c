#include <stdio.h>
/**
 * main - start of the program
 * Return: 0 for success
*/
int main(void)
{
char smallLetter;
char capLetter;
for (smallLetter = 'a'; smallLetter <= 'z'; smallLetter++)
{
putchar(smallLetter);
}
capLetter = 'A';
while (capLetter <= 'Z')
{
putchar(capLetter);
capLetter++;
}
return (0);
}
