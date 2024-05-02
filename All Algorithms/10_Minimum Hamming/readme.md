
1. Input Reading: Prompt the user to input the number of elements `n` and the elements themselves.

2. Vector Initialization: Initialize an empty vector `v` to store the elements.

3. Calculate Hamming Distance: Define a function `inBetweenHamDist` that takes the vector `v` as input and calculates the Hamming distance. Inside the function:
    - Initialize a variable `ans` to store the total Hamming distance.
    - Iterate through each bit position from 0 to 31 (assuming integers are represented using 32 bits).
    - For each bit position, count the number of ones and zeros across all elements in the vector by checking the bit at that position using bitwise operations.
    - Calculate the Hamming distance contribution for the current bit position by multiplying the count of ones with the count of zeros and adding it to `ans`.
    - Repeat this process for all bit positions.
    - Return the total Hamming distance `ans`.

4. Input Elements: Iterate `n` times, reading each element from the user and appending it to the vector `v`.

5. Output: Calculate the Hamming distance by calling the `inBetweenHamDist` function with the vector `v`, and print the result.

