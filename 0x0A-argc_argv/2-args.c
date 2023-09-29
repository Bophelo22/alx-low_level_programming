#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives.
 * @argc: input count
 * @argv: inout string array
 * Return: Always 0 for success
*/
int main(int argc, char* argv[])
{
int i;
i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
