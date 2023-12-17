## Algorithm: Intermediate Code Generation

### Algorithm With Loop:
1. Initialize the clock variable t.
2. Record the starting time using clock().
3. Enter a loop with the following steps for each iteration:
    1. Execute the printf("Hello\n"); statement.
    2. Continue to the next iteration until 5 iterations are completed.
4. Record the ending time using clock().
5. Calculate the time taken by subtracting the starting time from the ending time.
6. Convert the time taken to seconds using CLOCKS_PER_SEC.
7. Print the results, indicating the time taken for the loop to execute.
8. End the program.

### Algorithm Without Loop / Loop Unrolling:
1. Initialize the clock variable t.
2. Record the starting time using clock().
3. Execute the printf("Hello\n"); statement 5 times consecutively.
4. Record the ending time using clock().
5. Calculate the time taken by subtracting the starting time from the ending time.
6. Convert the time taken to seconds using CLOCKS_PER_SEC.
7. Print the results, indicating the time taken for the executed statements.
8. End the program.
