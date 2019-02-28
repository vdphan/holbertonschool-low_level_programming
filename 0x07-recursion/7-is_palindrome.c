#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
*@s: character value.
 *
* Return: the length i of string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1) + 1;

	}
	return (n);

}
/**
 * palindromehelp - returns square root.
 *@j: integer value.
 *@i: integer value.
 *@s: character value.
 *
 * Return: the length i of string.
 */
int palindromehelp(char *s, int i, int j)
{
	if ((s[i] != s[j]) || j < 0)
		return (0);
	else if (j == 0)
		return (1);
	return (palindromehelp(s, i + 1, j - 1));
}
/**
 * is_palindrome - check if string is palindrome.
 *@s: character value.
 *
 * Return: 1(palindrome) or 0(not palindrome).
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindromehelp(s, 0, _strlen_recursion(s) - 1));
}
