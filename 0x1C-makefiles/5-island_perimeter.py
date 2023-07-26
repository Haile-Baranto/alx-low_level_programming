#!/usr/bin/python3
"""_The module contains a function island_perimeter that
    returns the premiter of the island described in grid
    """
def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists of integers representing the island.

    Returns:
        int: The perimeter of the island.
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # Found land zone
                perimeter += 4  # Add 4 for the land square

                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:  # Upper cell is land
                    perimeter -= 2  # Subtract 2 for the shared edge
                if j > 0 and grid[i][j - 1] == 1:  # Left cell is land
                    perimeter -= 2  # Subtract 2 for the shared edge

    return perimeter
