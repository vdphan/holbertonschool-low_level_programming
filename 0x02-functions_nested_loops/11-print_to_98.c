#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print every minute of the day
 *@n : integer value
 *
 *void: a function does not return a value
 */
void print_to_98(int n)
{
		while (n < 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
}
