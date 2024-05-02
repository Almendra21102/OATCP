
1. Include Libraries and Define Data Structures: Include necessary libraries (`bits/stdc++.h`). Define data structures: `unordered_map` to store adjacency list, `unordered_map` to store in-degree and out-degree of each node, and a global vector `v` to store the order of traversal.

2. Build Graph Function: Define a function `build_graph` that takes a 2D vector `pairs` representing edges and populates the adjacency list and computes the in-degree and out-degree of each node.

3. Depth-First Search (DFS): Define a DFS function `dfs` that takes a node `i` and performs DFS traversal to generate a topological ordering of the graph starting from node `i`. Store the order of traversal in the global vector `v`.

4. Main Function: 
    - Read input `n` representing the number of edges.
    - Read `n` pairs of integers representing edges.
    - Call `validArrangement` function to find a valid arrangement of edges.
    - If a valid arrangement is found, print the result, else print "No valid arrangement possible".

5. Valid Arrangement Function:
    - Determine the starting node `i0` for DFS traversal based on the condition that it has out-degree `indeg[v] + 1`. Perform DFS traversal starting from `i0`.
    - Reverse the order of traversal to obtain the valid arrangement of edges.
    - Return the valid arrangement as a 2D vector.

