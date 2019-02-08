#include <stdio.h>
/**
 *main - entry point
 *use putchar to print alphabet in reverse way.
 *Return: alwayls 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
