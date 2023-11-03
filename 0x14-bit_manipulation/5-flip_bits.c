#include "main.h"
/**
* flip_bits - function that returns the number of bits you
* would need to flip to get from one number to another
* @n: num to start with
* @m: num to end with
* Return: the number of bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, rounder = 0;
unsigned long int previous;
unsigned long int ex;
k = 63;
ex = n ^ m;
for (; k >= 0; k--)
{
previous = ex >> k;
if (previous & 1)
rounder++;
}
return (rounder);
}
