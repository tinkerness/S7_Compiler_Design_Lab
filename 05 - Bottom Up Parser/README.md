## Algorithm: Operator Precedence Parsing
1. Start
1. Initialize:
   - char stack[20], ip[20], opt[10][10][2], ter[10].
   - int i, j, k, n, top = 0, col, row.

2. Input Terminal Symbols:
   1. Prompt the user to enter the number of terminals (n).
   2. Read the terminal symbols into the array ter.

3. Prompt the user to enter the operator precedence table values into the opt array.

4. Display the operator precedence table.

5. Parsing:
   1. Initialize stack with '$' as the bottom marker.
   2. Prompt the user to enter the input string (ip).
   3. Initialize i = 0.
   4. Display the initial stack, input string, and action headers.

6. Parsing Loop:
   1. While i <= strlen(ip), do the following:
      1. Find the column (col) and row (row) indices for the current stack and input symbols.
      2. Check the operator precedence relation opt[col][row].
      3. If relation is '<' or '=', shift the input symbol onto the stack.
      4. If relation is '>', perform reduction by removing elements from the stack until a '<' is encountered.
      5. Display the current stack, input string, and the action taken.

7. Termination:
   1. If stack contains only '$' and input is completely processed, print "String is accepted."
   2. If parsing error occurs or the input is not fully processed, print "String is not accepted."

8. Stop.