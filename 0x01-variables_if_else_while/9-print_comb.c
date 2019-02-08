#include <stdio.h>
/**
 *main - entry point
 *use putchar to print commbination of command.
 *Return: alwayls 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
