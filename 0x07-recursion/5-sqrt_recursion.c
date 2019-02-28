#include "holberton.h"
/**
* _sqrthelp - returns square root.
*@n: integer value.
*@i: integer value.
*
* Return: the length i of string.
*/
int _sqrthelp(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrthelp(n, i + 1));
}
/**
 * _sqrt_recursion - returns the square root.
 *@n: integer value.
 *
 * Return: the length i of string.
 */
int _sqrt_recursion(int n)
{
	return (_sqrthelp(n, 1));
}
