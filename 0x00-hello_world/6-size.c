#include <stdio.h>
/**
 *main - entry point
 *char: first variable
 *int: second variable
 *longint: third variable
 *longlongint: fourth variable
 *float: fifth variable
 *Return: alwayls 0 (success)
 */
int main(void)
{
	/**
	 *Sizeof operator is used to evaluate the size of a variable
	 */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
