#include <stdio.h>
#include <unistd.h>
/**
 * main - is where the program will start to execute
 * Return: 0 will be returned as a success
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
