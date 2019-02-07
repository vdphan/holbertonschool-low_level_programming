#include <stdio.h>
/**
 *main - entry point
 *use putchar to print alphabet except q and e
 *Return: alwayls 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if ((i != 'q') && (i != 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
