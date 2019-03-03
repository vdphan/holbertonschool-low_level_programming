#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry point of a program that adds positive numbers..
 *@argc: integer value count of the arguments supplied to the program.
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (i != 0)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
