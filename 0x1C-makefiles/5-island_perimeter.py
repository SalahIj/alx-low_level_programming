#!/usr/bin/python3
""" Imported modules """

def island_perimeter(grid):
    """ The function definition 
    Args:
        gris: the input
    Return
        the result
    """
    wid = len(grid[0])
    hei = len(grid)
    ed = 0
    si = 0

    for i in range(hei):
        for j in range(wid):
            if (grid[i][j] == 1):
                si += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    ed += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    ed += 1
    return (si * 4 - ed * 2)
