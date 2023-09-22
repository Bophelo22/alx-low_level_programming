#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @n: ito be used
 * Return: n 
 */
char *leet(char *n)
{
int i;
int j;
i = 0;
j = 0;
char numb[10];
char chars[10];
numb[10] = "4433007711";
chars[10] = "aAeEoOtTlL";
for (; n[i] != '\0'; i++)
{
for (; j < 10; j++)
{
if (n[i] == chars[j])
{
n[i] = numb[j];
}
}
} return (n);
}
