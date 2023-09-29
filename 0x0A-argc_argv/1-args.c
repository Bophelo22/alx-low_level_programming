#include <stdio.h>
#include "main.h"
/**
 * main -program that prints the number of arguments passed into it.
 * @argc: input count
 * @argv: input string array
 * Return: Always 0 for success
*/
int main(int argc, char* argv[] __attribute__((unused)))
{
printf("%d\n",argc - 1);
return (0);
}
