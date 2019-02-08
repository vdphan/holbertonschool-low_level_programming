#include <stdio.h>
/**
 *main - entry point
 *use putchar to print 00 to 99.
 *Return: alwayls 0 (success)
 */
int main(void)
{
	int i, j, z;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			for (z = 48 ; z <= 57 ; z++)
			{
				if ((i < j) && (j < z))
				{
					putchar(i);
					putchar(j);
					putchar(z);
					if ((i + j + z) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
