#include "holberton.h"
#include <stdio.h>
/**
*main - entry point .
*@argc: integer value count of the arguments supplied to the program.
*@argv: character value an array of pointers to the strings.
*
*Return: 0(success)
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
