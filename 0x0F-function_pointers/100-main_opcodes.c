#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints  own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, byts;
char *array;
i = 0;
array = (char *)main;
byts = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (byts < 0)
{
printf("Error\n");
exit(2);
}
for (; i < byts; i++)
{
if (i == byts - 1)
{
printf("%02hhx\n", array[i]);
break;
}
printf("%02hhx ", array[i]);
}
return (0);
}
