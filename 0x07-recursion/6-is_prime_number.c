#include "holberton.h"
/**
 * primehelp - returns square root.
 *@n: integer value.
 *@i: integer value.
 *
 * Return: 1 is prime, 0 is not prime.
 */
int primehelp(int n, int i)
{
	if ((n % i == 0) && i < n)
		return (0);
	if (i == n)
		return (1);
	return (primehelp(n, i + 1));
}
/**
 * is_prime_number - check if the number is prime or not.
 *@n: integer value.
 *
 * Return: the prime number.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (primehelp(n, 2));
}
