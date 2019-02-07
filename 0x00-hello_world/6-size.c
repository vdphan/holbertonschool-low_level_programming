#include <stdio.h>
/**
 *main - entry point
 *charsize: first variable
 *integersize: second variable
 *longint: third variable
 *longlongint: fourth variable
 *floatsize: fifth variable
 *Return: alwayls 0 (success)
 */
int main(void)
{
	char charsize;
	int integersize;
	long int longint;
	long long int longlongint;
	float floatsize;
	/**
	 *Sizeof operator is used to evaluate the size of a variable
	 */
	printf("Size of char: %d byte\n", sizeof(charsize));
	printf("Size of int: %d bytes\n", sizeof(integersize));
	printf("Size of int: %ld bytes\n", sizeof(longint));
	printf("Size of int: %lld bytes\n", sizeof(longlongint));
	printf("Size of float: %f bytes\n", sizeof(floatsize));
	return (0);
}
