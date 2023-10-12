#include "3-calc.h"
#include "3-get_op_func.c"
#include "3-op_functions.c"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the result
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    char *operation;
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operation = argv[2];

    if ((operation[1] == '\0') && (get_op_func(operation) == NULL))
    {
        printf("Error\n");
        exit(99);
    }
    if (((*operation == '/') || (*operation == '%')) && (num2 == 0))
    {
        printf("Error\n");
        return (100);
    }
    printf("%d\n", get_op_func(operation)(num1, num2));
    return (0);
}
