#!/usr/bin/python3

def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid

    Args:
        grid (List[List[int]]): A 2D list representing the island.
            0 represents a water zone, and 1 represents a land zone.

    Return:
        int: The Perimeter of the Island

    Requirements:
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water
        there is one island (or nothing).
        The island doesn’t have “lakes”
        Prototype: def island_perimeter(grid):
    """
    # Iterate through each rows/colums in grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the current cell is land (1)
            if grid[i][j] == 1:
                # Check if adjacent cells (up, down, left, right)
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
