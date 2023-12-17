## Algorithm

### Algorithm: Without Constant Propagation

1. Initialize clock variables (start, end) for measuring execution time.
2. Record the start time using the clock.
3. Initialize integer variables 'a', 'b'.
4. Calculate 'result' by calling the 'calculate' function with parameters 'a' and 'b'.
    a. Call the 'square' function with parameter 'a' to compute 'e'.
    b. Call the 'add' function with parameters 'b' and 'b' to compute 'f'.
    c. Sum 'e' and 'f' to get the final result.
5. Print the result.
6. Record the end time using the clock.
7. Calculate the CPU time used for execution.
8. Print the time taken for execution.
9. Return 0 to indicate successful completion.

        Function: square
        1. Accept an integer parameter 'a'.
        2. Compute the square of 'a' (a * a).
        3. Return the result.

        Function: add
        1. Accept two integer parameters 'a' and 'b'.
        2. Compute the sum of 'a' and 'b'.
        3. Return the result.

        Function: calculate
        1. Accept two integer parameters 'a' and 'b'.
        2. Call the 'square' function with parameter 'a' and store the result in variable 'e'.
        3. Call the 'add' function with parameters 'b' and 'b' and store the result in variable 'f'.
        4. Compute the final result by summing 'e' and 'f'.
        5. Return the final result.


### Algorithm: With Constant Propagation

1. Initialize clock variables (start, end) for measuring execution time.
2. Record the start time using the clock.
3. Print the result of the expression (3 * 3) + (4 + 4) directly.
4. Record the end time using the clock.
5. Calculate the CPU time used for execution.
6. Print the time taken for execution.
7. Return 0 to indicate successful completion.
