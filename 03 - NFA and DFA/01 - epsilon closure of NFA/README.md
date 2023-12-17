## ALGO

1. Open the input file ("input.dat") for reading.

2. Declare necessary variables and arrays - result[20][20], copy[3], states[20][20]

3. Prompt the user to input the number of states (n).

4. Prompt user to input the states and store them in the states array.

5. process each state:  
    For each state states[k]:  
    - Initialize i to 0.
    - Copy states[k] to state and copy arrays.
    - Add state to result[i].

6. Process Transitions:  
    While there are transitions in the file:
    - Read transition (state1, input, state2) from the file.
    - If state matches state1 and input is epsilon ("e"):
        - Add state2 to result[i].
        - Update state to state2.

7. Display the epsilon closure of the current state (result[i]).

8. Use rewind(INPUT) to reset the file position to the beginning for the next iteration.

9. Repeat the above steps for each state in the input.

9. Close the input file.