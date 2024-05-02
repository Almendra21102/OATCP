

1. Include Libraries and Define Macros: Include necessary libraries (`bits/stdc++.h`) and define macros (`int` as `long long` and `endl` as newline) for shorthand usage.

2. Define BFS Function: Implement a breadth-first search (BFS) function `bfs` that takes the graph `g`, source `s`, destination `t`, and a vector `p` to store the path. Inside the function:
    - Initialize a vector `vis` to keep track of visited nodes.
    - Create a queue `q` and push the source node `s` into it.
    - Mark `s` as visited and set its parent as `-1` in the path vector `p`.
    - While the queue is not empty, perform BFS traversal:
        - Dequeue a node `u`.
        - Iterate through all adjacent nodes of `u`. If an unvisited adjacent node with positive weight is found, enqueue it, mark it as visited, and update its parent in `p`.
    - Return `true` if the destination `t` is reachable from the source `s`, otherwise return `false`.

3. Define Ford-Fulkerson Algorithm: Implement the Ford-Fulkerson algorithm `fordFulkerson` that takes the graph `g`, source `s`, and destination `t`. Inside the function:
    - Create a residual graph `rG` as a copy of the original graph `g`.
    - Initialize a vector `p` to store the path.
    - Initialize `max_flow` to 0 to store the maximum flow.
    - While there exists an augmenting path from `s` to `t`:
        - Find the minimum residual capacity `flow` along the path.
        - Update the residual capacities of edges along the path.
        - Add `flow` to `max_flow`.
    - Return `max_flow`.

4. Main Function:
    - Set up I/O optimization.
    - Redirect input from "input.txt" and output to "output.txt".
    - Read the number of nodes `n`, source `src`, and destination `dest`.
    - Create an adjacency matrix `graph` with size `(n+1) x (n+1)` and initialize all elements to 0.
    - Read edge information (node1, node2, weight) until EOF and update the graph accordingly.
    - Print the output of `fordFulkerson` with the graph, source, and destination as arguments.

5. Execution:
    - Execute the program.
    - Read input from "input.txt".
    - Write output to "output.txt".

