#include <stdio.h>
/**
 *main - entry point
 *use putchar to print alphabet
 *Return: alwayls 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
