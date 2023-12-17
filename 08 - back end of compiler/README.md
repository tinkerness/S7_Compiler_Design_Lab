### Algorithm: Target Code Generation from Intermediate Code

1. Initialize variables: `icode` (2D array to store intermediate code lines), `str` (array to store a line of intermediate code), and `opr` (array to store the operation).
2. Read a set of intermediate code lines until "exit" is encountered, storing them in the `icode` array.
3. Initialize a loop to iterate through each line of intermediate code.
   1. Extract the operation from the third position of the current line (`str[3]`).
   2. Map the operation to the corresponding assembly operation and store it in `opr`.
   3. Print the target code instructions:
      - `Mov %c, R%d` to move a value to a register.
      - `%s %c, , R%d` to perform an arithmetic operation.
      - `Mov R%d, %c` to move a value from a register.
4. Continue the loop until "exit" is encountered.