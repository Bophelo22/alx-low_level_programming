#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @number: to bu used to get last digit
 * Return: last digit
*/
int print_last_digit(int number)
{
int last_digit;
if (number < 0)
{
number = -number;
}
last_digit = number % 10;
_putchar('0' + last_digit);
return (last_digit);
}
