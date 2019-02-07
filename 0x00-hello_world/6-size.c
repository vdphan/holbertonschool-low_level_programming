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
	printf("Size of char: %d byte(s)\n", sizeof(charsize));
	printf("Size of int: %d bytes(s)\n", sizeof(integersize));
	printf("Size of long int: %ld bytes(s)\n", sizeof(longint));
	printf("Size of long long int: %lld bytes(s)\n", sizeof(longlongint));
	printf("Size of float: %ld bytes(s)\n", sizeof(floatsize));
	return (0);
}
