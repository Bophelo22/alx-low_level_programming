#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input to be used to determine the
 * prime factor
 * Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
int prime;
if (n <= 1)
{
return (0);
}
prime = act_is_prime_number(n, n - 1);
return (prime);
}

/**
 * act_is_prime_number - to find the prime number
 * @n: input to use to find the prime
 * @i: input to use in condition
 * Return: the results of square root
*/

int act_is_prime_number(int n, int i)
{
if (i == 1)
{
return (1);
}
else if ((n % i == 0) && (i > 0))
{
return (0);
}
return (act_is_prime_number(n, i - 1));
}
