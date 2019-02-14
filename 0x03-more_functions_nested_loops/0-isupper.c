#include "holberton.h"
/**
 * _isupper - If c is uppercase, return 1. Otherwise, return 0.
 *@c : character
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
