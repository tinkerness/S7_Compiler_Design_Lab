# ALGO

## lex
1. The lexer takes an input stream of characters.
2. Initialize the lexer, including any necessary header inclusions.
3. Tokenization Rules:
    - Match a number [0-9]+(\.[0-9]*)? and return the token num.
    - Match identifiers [a-zA-Z][a-zA-Z0-9_]* and return the token id
    - Match arithmetic operators [-+/*] and return the corresponding token op
    - Match any other character and return the character itself.
    - Recognize newline characters and return 0.
4. The lexer returns the identified token to the yacc parser.
5. The yywrap function is called to indicate the end of input.

## yacc
1. The parser takes a sequence of tokens from the lexer.
2. Initialize the parser, including any necessary header inclusions.
3. Declare the tokens used in the grammar, such as num, id, op.
4. Define the grammar rules for statements (start) and expressions (s and x).
    - Statements consist of an identifier (id) followed by an assignment and an expression.
    - Expressions include identifiers, numbers, unary negation, and parentheses.
    - Include the semantic action for a valid expression, i.e., print "Valid expression". 
5. Implement the yyerror function to handle syntax errors. 
6. - In the main function, prompt the user to enter an expression.
    - Call yyparse() to initiate the parsing process.
7. - If the entered expression is valid, "Valid expression" is printed.
    - If there is a syntax error, "Invalid expression" is printed.