#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 for success
 */
int main(void)
{
char pssWrd[100];
int i;
int sum;
int n;
sum = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
pssWrd[i] = rand() % 100;
sum += pssWrd[i];
putchar(pssWrd[i]);
}
n = 2772 - sum;
pssWrd[100] = n;
putchar(n);
return (0);
}
