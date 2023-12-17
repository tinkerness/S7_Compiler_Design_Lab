# ALGO

## lex
1. The lexer takes an input stream of characters.
2. Initialize the lexer, including any necessary header inclusions.
3. Tokenization Rules:
    - Match sequences of digits [0-9]+ and return the token DIGIT
    - Match identifiers [a-zA-Z][a-zA-Z0-9_]* and return the token ID
    - Match newline characters \n and return the token NL
    - Match any other character and return the character itself.
4. The lexer returns the identified token to the yacc parser.

## yacc
1. The parser takes a sequence of tokens from the lexer.
2. Initialize the parser, including any necessary header inclusions.
3. Declare the tokens used in the grammar, such as DIGIT, ID, and NL.
4. Declare the precedence and associativity of operators using %left and %right directives.
5. Define the grammar rules for statements and expressions.
    - Statements are expressions followed by a newline.
    - Expressions include addition, subtraction, multiplication, division, parentheses, identifiers, and digits.
    - Include the semantic action for a valid statement, i.e., print "Valid expression". 
6. Implement the yyerror function to handle syntax errors. 
7. In the main function, prompt the user to enter an expression.
    - Call yyparse() to initiate the parsing process.