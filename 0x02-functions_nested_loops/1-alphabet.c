#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase
 * Return: 0 for success
 */

int main(void)
{
print_alphabet(); /*call the function print_alphabet*/
return (0);
}
/**
 * print_alphabet - function to print alphabet
 * @void: nothing to be used
 * Return: this function returns nothing
*/
void print_alphabet(void)
{
char i = 'a';
for (; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
