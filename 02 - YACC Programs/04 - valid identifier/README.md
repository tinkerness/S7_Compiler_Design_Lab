# ALGO

## lex
1. The lexer takes an input stream of characters.
2. Initialize the lexer, including any necessary header inclusions.
3. Tokenization Rules:
    - Match a number [0-9]+ and return the token digit.
    - Match identifiers [a-zA-Z][a-zA-Z0-9_]* and return the token letter.
    - Match any other character and return the character itself.
    - Recognize newline characters and return 0.
4. The lexer returns the identified token to the yacc parser.
5. The yywrap function is called to indicate the end of input.

## yacc
1. The parser takes a sequence of tokens from the lexer.
2. - Initialize the parser, including any necessary header inclusions.
    - Initialize a flag called valid to track identifier validity.
3. Declare the tokens used in the grammar, such as digit and letter.
4. Define the grammar rules for a valid identifier.
    - An identifier must start with a letter and can be followed by a combination of letters and digits.
5. Include the semantic action for a valid identifier, i.e., print "Valid identifier". 
5. Implement the yyerror function to handle syntax errors. 
    - Set the valid flag to 0.
6. - In the main function, prompt the user to enter an expression.
    - Call yyparse() to initiate the parsing process.
7. Check the valid flag and print the appropriate message.
    - Print "Valid identifier" if the identifier follows the grammar rules.
    - Print "Invalid identifier" if an error occurs during parsing.