## Algorithm: Recursive Descent Parser for Arithmetic Expressions

1. Initialize global variables: 
   - char input[10], int i = 0, error = 0.

2. Define production rule functions:

        a. E(): E -> T E'
        b. Eprime(): E' -> + T E'
        c. T(): T -> F T'
        d. Tprime(): T' -> * F T'
        e. F(): F -> (E) | a
    
    - Function E():
      - Calls T() and Eprime().
      
    - Function Eprime():
      - If input[i] is '+':
         - Increment i.
         - Call T().
         - Call Eprime() recursively.
    - Function T():
      - Calls F() and Tprime().
    - Function Tprime():
      - If input[i] is '*':
         - Increment i.
         - Call F().
         - Call Tprime() recursively.
    - Function F():
      - If input[i] is 'a':
         - Increment i.
      - Else if input[i] is '(':
         - Increment i.
         - Call E() recursively.
         - If input[i] is ')', increment i.
         - Else, set error flag to 1.
      - Else, set error flag to 1.

3. Main function:
   1. Prompt user to enter an arithmetic expression.
   2. Read the expression into input using scanf.
   3. Call E() to initiate the parsing process.
   4. Check if entire input is parsed and there are no errors:
      - If strlen(input) == i and error == 0, print "Accepted"
      - Else, print "Rejected!"

4. End of Algorithm.
