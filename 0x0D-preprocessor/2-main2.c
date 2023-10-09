#include "_putchar.c"
/**
 * main - program that prints the name of the
 * file it was compiled from, followed by a new line.
 * Return: 0 for success
*/
/**int main(void)
{
printf("%s\n", __FILE__);
return (0);
}*/

int main(void)
{
int i;
/**
* char fileName[] = __FILE__;
* works the same way as the following one
*/
char *fileName;
fileName = __FILE__;
i = 0;
for(; (fileName[i] != '\0'); i++)
{
_putchar(fileName[i]);
}
_putchar('\n');
return (0);
}
