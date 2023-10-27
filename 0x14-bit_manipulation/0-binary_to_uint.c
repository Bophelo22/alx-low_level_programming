#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b:  is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int convertdNum;
convertdNum = 0;
i = 0;
if (!b)
return (0);
for (; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
convertdNum = 2 * convertdNum + (b[i] - '0');
}
return (convertdNum);
}
