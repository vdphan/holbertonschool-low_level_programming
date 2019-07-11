#!/usr/bin/python3
"""
This module creates a function def island_perimeter(grid):
that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid."""
    p = 0
    for row in range(len(grid)):
        for e in range(len(grid[row])):
            if grid[row][e] == 1:
                if e == len(grid[row]) - 1 or grid[row][e + 1] == 0:
                    p += 1
                if (e != 0 and grid[row][e - 1] == 0) or e == 0:
                    p += 1
                if row == 0 or grid[row - 1][e] == 0:
                    p += 1
                if row == len(grid) - 1 or grid[row + 1][e] == 0:
                    p += 1
    return p
