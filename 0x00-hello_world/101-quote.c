#include <stdio.h>
/**
 *main - entry point
 *print error statement
 *Return: alwayls 0 (success)
 */
int write(int descriptor, char* str, int length);int write(int descriptor, char* str, int length);
int main (void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 57);
	return (1);
}
