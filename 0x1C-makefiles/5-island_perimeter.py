#!/usr/bin/python3
"""
This module contains a function that calculates the perimeter of an island
represented in a grid. In this grid, 0 represents water, and 1 represents land.
The grid cells are connected horizontally/vertically (not diagonally).
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    :param grid: List of list of integers where 0 represents a water zone
                 and 1 represents a land zone.
    :return: The perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                # Check top
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # Check bottom
                if row == height - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                # Check left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # Check right
                if col == width - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
