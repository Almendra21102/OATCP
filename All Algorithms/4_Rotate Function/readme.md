

1. Input Reading: Read the size of the array `n` and its elements from the user.

2. Calculate Initial Rotation Value: Initialize variables `sum` and `rotation` to 0. Iterate through the array `nums`, summing up its elements to `sum` and calculating the initial rotation value using the formula `rotation += i * nums[i]`, where `i` is the index.

3. Calculate Maximum Rotation Value: Initialize `maxRotation` to the initial rotation value. Then, iterate through the array in reverse starting from `n - 1`. For each iteration, update `rotation` using the formula `rotation += sum - n * nums[i]`, where `sum` is the sum of all elements in the array, and `maxRotation` is updated to the maximum value between `maxRotation` and `rotation`.

4. Result: After completing the iterations, `maxRotation` contains the maximum value of the function `F(0), F(1), ..., F(n-1)`.

5. Output: Print the maximum value of the function `F(0), F(1), ..., F(n-1)` calculated (`maxRotation`).

