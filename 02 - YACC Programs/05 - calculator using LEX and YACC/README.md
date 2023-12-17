# ALGO

## lex
1. The lexer takes an input stream of characters.
2. Initialize the lexer, including any necessary header inclusions.
3. Tokenization Rules:
    - [0-9]+ : Match one or more digits and set yylval to the numeric value. Return the token type NUMBER.
    - [\t] : Ignore tab characters.
    - [\n] : Return 0 for newline characters.
    - . : For other characters, returs the character encountered.
4. The lexer returns the identified token to the yacc parser.
5. The yywrap function is called to indicate the end of input.

## yacc
1. The parser takes a sequence of tokens from the lexer.
2. - Initialize the parser, including any necessary header inclusions.
    - Initialize flag=0 to check validity of expression.
3. Declare the token used in the grammar - NUMBER.
4. Define the grammar rules.
    - ArithmeticExpression: if valid E, print the result.
    - E: grammar rules for arithmetic expressions.
5. Implement the yyerror function to handle syntax errors.
    - Incase of error, set the flag variable to 1 and print an error message.
6. - In the main function, prompt the user to enter an expression.
    - Call yyparse() to initiate the parsing process.
7. If the expression is valid, print the result.