

1. Input Reading: Read the integer `n`, representing the target sum.

2. Dynamic Programming Initialization: Initialize a dynamic programming (DP) array `dp` of size `n + 1` where `dp[i]` represents the number of ways to achieve sum `i`, initialized with zeros except for `dp[0]` set to 1.

3. Dynamic Programming Iteration: Iterate through each integer `i` from 1 to `n`. For each integer, iterate through integers `j` from 1 to 6 representing the numbers on the faces of a standard die. For each `j`, update `dp[i]` by adding `dp[i - j]` since the number of ways to achieve sum `i` is the sum of the ways to achieve sums `i - 1`, `i - 2`, ..., `i - 6`. Ensure `i - j` is within bounds.

4. Modular Arithmetic: To avoid integer overflow, take the modulus (`MOD`) of `dp[i]` after each addition.

5. Output: After completing the DP iteration, output the number of ways to achieve the target sum `n` (`dp[n]`).

