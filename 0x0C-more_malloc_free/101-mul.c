#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two positive numbers.
 * @mul: to be used for sum of multiple
 * @num1: to be used for multiplication
 * @num2: to be used for multiplication
 * Retrun: multiple of two numbers
 */
int main(int argc, char *argv[])
{
char *num1;
char *num2;
char *results;
num1 = argv[1];
num2 = argv[2];
if (argc != 3 || is_digit(num1) && is_digit(num2))
{
printf("Error");
exit(98);
}
results = _mulTwoNumbers(num1, num2);
printf("Result: %s\n", results);
free(results);
return (0);
}

/**
* is_digit - checks if a string contains a non-digit char
* @str: string to be evaluated
**
Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _mulTwoNumbers - function that multiplies two positive numbers.
 * @num1: to be used for multiplication
 * @num2: to be used for multiplication
 * Retrun: multiple of two numbers
*/
char *_mulTwoNumbers(char *num1, char *num2)
{
char *mul;
int i, num1Len, num2Len, lenResults;
i = 0;
num1Len = 0;
num2Len = 0;
for (; ((num1[num1Len] != '\0') && (num2[num2Len] != '\0')); i++)
{
num1Len++;
num2Len++;
}
lenResults = num1Len + num2Len;
mul = malloc(lenResults + 1);
for (int i = 0; i < lenResults; i++)
{
mul[i] = '0';
}
for (int i = num1Len - 1; i >= 0; i--)
{
int c;
int product;
c = 0;
for (int j = num2Len - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0') + (mul[i + j + 1] - '0') + c;
mul[i + j + 1] = '0' + (product % 10);
c = product / 10;
}
mul[i] = '0' + c;
}
return (mul);
}
