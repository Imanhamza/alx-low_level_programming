#!/usr/bin/python3
''' The primeter of an Island '''


def island_perimeter(grid):
    '''
    A function returns the perimeter of the island described in grid
    '''
    primeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # if the cell is land check the sides
            if grid[i][j] == 1:
                # the top
                if i == 0 or grid[i - 1][j] == 0:
                    primeter += 1
                # the bottom
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    primeter += 1
                # the left
                if j == 0 or grid[i][j - 1] == 0:
                    primeter += 1
                # the right
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    primeter += 1
    return primeter
