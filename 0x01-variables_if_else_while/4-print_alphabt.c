#include <stdio.h>
/**
 *main - entry point
 *use putchar to print alphabet
 *Return: alwayls 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; (i != 'q') && (i != 'e') && (i <= 'z') ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
