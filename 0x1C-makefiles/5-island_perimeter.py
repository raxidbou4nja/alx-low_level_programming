#!/usr/bin/python3
"""5-island_perimeter module"""


class IslandPerimeterCalculator:
    def __init__(self, grid):
        self.grid = grid

    def calculate_perimeter(self):
        perimeter = 0
        length = len(self.grid) - 1
        width = len(self.grid[0]) - 1

        for i, row in enumerate(self.grid):
            for j, cell in enumerate(row):
                if cell == 1:
                    if i == 0 or self.grid[i - 1][j] != 1:
                        perimeter += 1
                    if j == 0 or self.grid[i][j - 1] != 1:
                        perimeter += 1
                    if j == width or self.grid[i][j + 1] != 1:
                        perimeter += 1
                    if i == length or self.grid[i + 1][j] != 1:
                        perimeter += 1
        return perimeter
