#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
n = add(89, 9);
printf("%d\n", n);
return (0);
}
/**
 * add - function that adds two integers and returns the result.
 * @num1: int number to be added
 * @num2: int number to be added
 * Return: sum of two numbers
*/
int add(int num1, int num2)
{
int sum = 0;
sum += num1 + num2;
return (sum);
}
