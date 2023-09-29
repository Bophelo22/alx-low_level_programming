#include "stdio.h"
#include "stdlib.h"
#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: input count
 * @argv: input string array
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
int i, sum;
i = 1;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
for (; i < argc; i++)
{
if ((atoi(argv[i]) == 0) && (argv[i][0] != '0'))
{
printf("Error\n");
return (1);
}
else if (atoi(argv[i]) >= 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}
