"""
In Python, conditional statements allow you to make decisions based on the values of variables or the result of comparisons. Let’s dive into the basics:

#-------------------------------------------------------------------
if Statement:
The simplest form of an if statement looks like this:

if <condition> :
    # code of block

In this structure:
<condition> is an condition evaluated in a Boolean context (i.e., it results in either True or False).

<code of block> is a valid Python statement that must be indented.

If <condition> evaluates to True, then <statement> is executed.


#-------------------------------------------------------------------
if-else Statement:
The if-else statement allows you to execute different blocks of code depending on whether a condition is true or false.
Example:
Python

if <expr>:
    # Code to execute if <expr> is True
else:
    # Code to execute if <expr> is False


#-------------------------------------------------------------------
if elif Clauses/ladder:
When you have multiple conditions to check, you can use elif (short for “else if”) clauses.
Example:
Python

if <expr1>:
    # Code to execute if <expr1> is True
elif <expr2>:
    # Code to execute if <expr2> is True
else:
    # Code to execute if neither <expr1> nor <expr2> is True

#-------------------------------------------------------------------
Nested if Statements:
You can nest if statements inside other if statements.
Example:
Python

if <outer_expr>:
    if <inner_expr>:
        # Code to execute if both <outer_expr> and <inner_expr> are True


#-------------------------------------------------------------------
Conditional Expressions (Ternary Operator):
Python provides a concise way to write simple if-else expressions using the ternary operator.
Example:
Python

result = <value_if_true> if <expr> else <value_if_false>
"""