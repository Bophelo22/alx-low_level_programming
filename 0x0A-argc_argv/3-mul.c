#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: input count
 * @argv: input string array
 * Return: Always 0 for success
*/
int main(int argc,char* argv[])
{
int i;
double mul = 1;
i = 1;
if(argc > 1)
{
for (; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%.0f\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
