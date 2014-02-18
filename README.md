scheme-ish
=====

parse like this:
push each token on parse stack
when you find a close paren, pop off things in the parse stack into the eval stack, until you find an open paren
eval the eval stack,
push the result back on to the parse stack

thats all i have so far
