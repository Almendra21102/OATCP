

1. Input Reading: Read the size of `nums1` and its elements from the user.

2. Max Product Computation: Initialize `maxi` variable to `INT_MIN` to keep track of the maximum product found so far. Also, initialize `prod` variable to 1. Iterate through `nums1` from the beginning, multiplying each element with `prod` and updating `maxi` with the maximum of `prod` and `maxi`. If `prod` becomes 0, reset it to 1.

3. Reversed Max Product Computation: Reset `prod` to 1 and iterate through `nums1` from the end. Repeat the same process as in step 2.

4. Result: After both iterations, `maxi` contains the maximum product of contiguous subarrays of `nums1`.

5. Output: Print the maximum product computed (`maxi`).
