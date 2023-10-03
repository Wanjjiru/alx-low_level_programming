#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function frees 2dimention int array
 * @grid: two-dimention grid
 * @height: height
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
