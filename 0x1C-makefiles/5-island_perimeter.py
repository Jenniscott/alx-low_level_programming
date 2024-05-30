#!/usr/bin/python3
"""island_perimeter modul"""

def island_perimeter(grid):

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each land cell initially contributes 4 to the perimeter
                perimeter += 4

                # Check the cell above (if it's within bounds and is land)
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                # Check the cell to the left (if it's within bounds and is land)
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
