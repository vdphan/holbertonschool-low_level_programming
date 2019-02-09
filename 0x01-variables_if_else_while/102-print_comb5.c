#include <stdio.h>
/**
 *main - entry point
 *use putchar and loop to print number combination..
 *Return: alwayls 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 99 ; i++)
	{
		for (j = 0 ; j <= 99 ; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if ((i == 98) && (j == 99))
				{
					break;}
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
