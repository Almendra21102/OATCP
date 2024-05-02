

1. Input Reading: Prompt the user to enter a number as a string and the value of `k`.

2. Corner Case Handling: Check if the length of the number is equal to `k`. If it is, print "0" as the result and exit, as no digits need to be removed.

3. Stack Operation: Initialize a stack to store the digits of the number. Iterate through the digits of the number from left to right. For each digit, compare it with the top of the stack. If the current digit is smaller than the top of the stack and `k` is not zero, pop elements from the stack until either the stack is empty, the top element is smaller than or equal to the current digit, or `k` becomes zero. Then, push the current digit onto the stack.

4. Creating Result Stack: After processing all digits, create another stack `resultStack` to store the final result. Pop elements from the original stack and push them onto `resultStack`. During this process, skip popping if `k` is not zero.

5. Formatting Result: Remove leading zeros from the result by popping zeros from `resultStack`. Then, construct the result string by popping elements from `resultStack` and appending them to the result string. Finally, print the result string.

