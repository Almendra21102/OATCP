


1. Input Reading: Prompt the user to input the sizes of arrays `a[]` and `b[]`, denoted by `n` and `m` respectively. Then, read the elements of arrays `a[]` and `b[]` from the user.

2. Frequency Map: Create a map `mp` to store the frequency of elements in array `b[]`. Traverse array `b[]`, incrementing the frequency of each element in the map.

3. Sorting: Sort both arrays `a[]` and `b[]` in non-decreasing order using the `sort` function.

4. Counting Pairs: Iterate over each element in array `a[]`. For each element, iterate over array `b[]`. If the frequency of the current element in `b[]` is greater than 0 and the absolute difference between the current elements of arrays `a[]` and `b[]` is less than or equal to 1, increment the counter `cnt`, decrease the frequency of the element in `b[]` by 1, and break from the inner loop.

5. Output: Print the value of `cnt % MOD`, which represents the number of pairs `(a[i], b[j])` satisfying the given condition, taking modulo `MOD` to avoid integer overflow.

