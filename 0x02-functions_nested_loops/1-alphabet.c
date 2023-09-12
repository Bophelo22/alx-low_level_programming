#include "main.h"
#include "_putchar.c"

/**
 * main - Write a function that prints the alphabet, in lowercase
 * Return: 0 for success
 */

int main(void)
{
print_alphabet(); /*call the function print_alphabet*/
return (0);
}
/*function to print alphabets in ascending order*/
void print_alphabet(void)
{
char i = 'a';
for (; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
