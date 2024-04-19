#!/usr/bin/python3
"""calculates perimeter of the island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    rows = len(grid)
    col = len(grid[0])
    per = 0

    for i in range(rows):
        for j in range(col):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] == 0:
                    per += 1
                if j == col - 1 or grid[i][j + 1] == 0:
                    per += 1
                if i == 0 or grid[i - 1][j] == 0:
                    per += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    per += 1
    return per
