#!/usr/bin/python3
"""Module containing the island_perimeter method"""

def island_perimeter(grid):
    """Method to find the perimeter of a an island in grid

    1's = island
    0's = water
    """
    count = 0
    for num, glist in enumerate(grid):
        for list_num, i in enumerate(glist):
            if i == 1:
                if num - 1 < 0 or grid[num - 1][list_num] == 0:
                    count += 1
                if num + 1 >= len(grid) or grid[num + 1][list_num] == 0:
                    count += 1
                if list_num - 1 < 0 or grid[num][list_num - 1] == 0:
                    count +=1
                if list_num + 1 >= len(glist) or grid[num][list_num + 1] == 0:
                    count += 1
    return count
