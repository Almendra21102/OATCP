

1. Input Reading: Read the size of the grid `n` and the grid itself as a vector of strings.

2. Dynamic Programming Initialization: Initialize a dynamic programming (DP) array `dp` of size `n + 1` where `dp[i]` represents the number of ways to reach cell `(i, j)` in the grid, initialized with zeros except for `dp[0]` set to 1.

3. Dynamic Programming Iteration: Iterate through each cell `(i, j)` in the grid using nested loops. For each cell, if it's not blocked (marked by '*'), update `dp[j]` by adding `dp[j - 1]` if the previous cell `(i, j - 1)` is reachable. If the cell is blocked, set `dp[j]` to 0.

4. Final Result: After completing the DP iteration, check if the destination cell `(n - 1, n - 1)` is reachable and not blocked. If so, output the number of ways to reach it (`dp[n - 1]`); otherwise, output -1.

5. Output: Print the final result.

