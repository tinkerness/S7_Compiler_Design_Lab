## Algorithm: Intermediate Code Generation

1. Initialize global variables:
   - int i = 1, j = 0, no = 0, tmpch = 90.
   - char str[100], left[15], right[15].
   - struct exp k[15].

2. Function findopr():
   1. For each operator (':', '/', '*', '+', '-'):
      1. Identify its position in the input expression.
      2. Store the position and operator type in the k array.

3. Function explore():
   1. Initialize i = 1.
   2. While k[i].op is not '\0':
      1. Call fleft(k[i].pos).
      2. Call fright(k[i].pos).
      3. Replace the operator in the original string with a temporary character (tmpch--).
      4. Print the intermediate code for the current operator.
      5. Increment i.
   3. Call fright(-1) to handle the last operand.
   4. If no operators are found, generate intermediate code for the entire expression.
   5. Print the final intermediate code.

4. Function fleft(int x):
   1. Initialize w = 0, flag = 0.
   2. Decrement x.
   3. While x is not -1 and str[x] is not an operator:
      1. If str[x] is not '$' and flag is 0:
         - Copy str[x] to left[w].
         - Set str[x] to '$'.
         - Set flag to 1.
         - Increment w.
      2. Decrement x.

5. Function fright(int x):
   1. Initialize w = 0, flag = 0.
   2. Increment x.
   3. While x is not -1 and str[x] is not an operator:
      1. If str[x] is not '$' and flag is 0:
         - Copy str[x] to right[w].
         - Set str[x] to '$'.
         - Set flag to 1.
         - Increment w.
      2. Increment x.
