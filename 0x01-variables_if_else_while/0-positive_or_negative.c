#include <stdlib.h>
#include <time.h>
/*additional headers*/
#include <stdio.h>

/**
 * main - is where the program will start to execute
 * Return: 0 will be returned as a success
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
