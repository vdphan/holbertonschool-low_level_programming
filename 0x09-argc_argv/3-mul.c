#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point .
 *@argc: integer value count of the arguments supplied to the program.
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{


	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
