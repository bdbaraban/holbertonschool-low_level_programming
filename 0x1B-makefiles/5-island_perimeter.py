#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    if (type(grid) != list or
            not all(type(row) == list for row in grid) or
            not all(type(n) == int for n in [e for r in grid for e in r])):
        return 0

    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter += 1
                if (j < width - 1 and grid[i][j + 1] == 1):
                    perimeter += 1
                if (i < height - 1 and grid[i + 1][j] == 1):
                    perimeter += 1
    return perimeter
