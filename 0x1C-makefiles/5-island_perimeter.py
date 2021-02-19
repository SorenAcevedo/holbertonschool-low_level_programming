#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ Calculate island perimeter """

    if len(grid) < 1:
        return 0

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                try:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                except:
                    pass
    return perimeter
