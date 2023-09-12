#include "main.h"
#include "_putchar.c"
/**
 * main - 10 x alphabet
 * Return: 0 for success
*/
int main(void)
{
print_alphabet_x10();/*call the function*/
return (0);
}
/**
 * print_alphabet_x10 - function that prints alphabet
 * @void: nothing to be used
 * Return: this function returns nothing
*/
void print_alphabet_x10(void)
{
int i = 10;
for (; i > 0; i--)
{
char j = 'a';
for (; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
