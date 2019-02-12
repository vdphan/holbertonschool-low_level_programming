#include "holberton.h"
/**
 *_abs - print absolute value
 *@r : number need to become absolute value
 *
 *Return: 1 (lowercase), else (return 0)
 */
int _abs(int r)
{
	if (r < 0)
		r = -r;
	return (r);
}
