#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - concentrate 2 strings.
 * @grid: integer value.
 * @height: integer value.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
