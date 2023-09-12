#include "main.h"
#include "_putchar.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
/**
 * _abs - function that computes the absolute value of an integer.
 * @abs: to be checked
 * Return: abs
*/
int _abs(int abs)
{
if (abs < 0)
{
return (-abs);
}
else
{
return (abs);
}
}
