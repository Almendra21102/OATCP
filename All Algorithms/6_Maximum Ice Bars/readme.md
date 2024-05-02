

1. Input Reading: Prompt the user to input the number of ice cream bars `n`, their costs, and the number of coins the boy has.

2. Counting Array: Find the maximum cost among the ice cream bars. Initialize a counting array `counting_array` of size `max_cost + 1` with all elements initialized to 0. Traverse through the costs of ice cream bars, incrementing the count of each cost in the counting array.

3. Buying Ice Cream Bars: Initialize a variable `ice_cream_bars` to 0 to keep track of the number of ice cream bars bought. Iterate through each cost from 0 to `max_cost`. While there are available ice cream bars of the current cost and the boy has enough coins to buy them, subtract the cost from the coins, increment `ice_cream_bars`, and decrement the count of the current cost in the counting array.

4. Stopping Condition: If the number of coins becomes less than the current cost, break the loop as the boy cannot buy more ice cream bars.

5. Output: Print the maximum number of ice cream bars the boy can buy based on the available coins.

