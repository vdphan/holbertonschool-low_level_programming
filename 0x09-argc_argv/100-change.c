#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*change - coin change count.
*@a: integer value.
*
*Return: number of coin change.
*/
int change(int a)
{
	int coins = 0;

	while (a != 0)
	{
		if (a >= 25)
			a = a - 25;
		else if (a >= 10)
			a = a - 10;
		else if (a >= 5)
			a = a - 5;
		else if (a >= 2)
			a = a - 2;
		else if (a == 1)
			a = a - 1;
		coins++;
	}
	return (coins);
}
/**
 *main - entry point.
 *@argc: integer value count of the arguments supplied to the program.
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
		printf("0\n");
	else
		printf("%d\n", change(number));
	return (0);
}
