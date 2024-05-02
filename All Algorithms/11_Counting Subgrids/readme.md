

1. Input Reading: Prompt the user to input the size of the grid `n` and the elements of the grid.

2. Grid Initialization: Initialize a 2D vector `v` of size `n x n` to represent the grid, with all elements initialized to 0.

3. Count Subgrids Function: Define a function `count_subgrid` that takes the grid `color` as input and returns the number of subgrids with the same color in both rows. Inside the function:
    - Iterate over all pairs of rows `a` and `b` in the grid, such that `a < b`.
    - Initialize a variable `count` to 0 to count the number of columns with the same color in both rows.
    - Iterate over each column `i` in the grid and increment `count` if both `color[a][i]` and `color[b][i]` are equal to 1.
    - Calculate the number of subgrids with the same color in both rows using the formula `((count-1) * count) / 2` and add it to the total count of subgrids.
    - Repeat this process for all pairs of rows in the grid.
    - Return the total count of subgrids.

4. Input Grid Elements: Read the elements of the grid from the user, filling the 2D vector `v` row by row.

5. Output: Calculate the number of subgrids with the same color in both rows by calling the `count_subgrid` function with the grid `v` as input. Print the result.
