#include <stdio.h>
/**
 * main - is where the program will start to execute
 * Return: 0 will be returned as a success
*/
int main(void)
{
char a;
int an;
long int al;
long long int all;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(an));
printf("Size of a int: %zu byte(s)\n", sizeof(al));
printf("Size of a long long int: %zu byte(s)\n", sizeof(all));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
