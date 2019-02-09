#include <stdio.h>
#include <unistd.h>
/**
 *main - entry point
 *print error statement without using printf, putchar
 *Return: alwayls 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,2015-10-19\n",
	      60);
	return (1);
}
