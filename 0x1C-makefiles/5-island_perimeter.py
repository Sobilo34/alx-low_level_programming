#!/usr/bin/python3

def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid

    Args:
        grid (List[List[int]]): A 2D list representing the island.
            0 represents a water zone, and 1 represents a land zone.

    Return:
        int: The Perimeter(p) of the Island
    """
    p = 0

    # Iterate through the rows and columns of grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                p += 4

                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2

    return (p)
