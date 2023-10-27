#include "main.h"
/**
* get_bit - function that returns the value of a bit at a given index.
* @n: search for index or number or integer
* @index: numbers of bit of index(s)
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bitValues;
if (index > 63)
return (-1);
bitValues = (n >> index) & 1;
return (bitValues);
}
