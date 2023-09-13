#include "main.h"
#include "_putchar.c"

/**
 * main - JCheck the code
 * Return: Always 0 for success
*/

int main(void)
{
jack_bauer();
return (0);
}
/**
 * jack_bauer - function that prints every minute of the day
 * @void: nothing to be used
 * Return: this function returns nothing
*/
void jack_bauer(void)
{
int hours;
for (hours = 0; hours < 24; hours++)
{
int minutes;
for (minutes = 0; minutes < 60; minutes++)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (minutes / 10));
_putchar('0' + (minutes % 10));
_putchar('\n');
}
}
}
