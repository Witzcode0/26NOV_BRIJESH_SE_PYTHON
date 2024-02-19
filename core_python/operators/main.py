"""
In Python, operators are symbols or special keywords used to perform operations on operands. Operands can be variables, constants, or expressions. Python supports various types of operators, including:

x = 10
y = 20
z = x + y
x,y,z - operands
=, + - operators


Arithmetic operators: Used to perform mathematical operations like addition, subtraction, multiplication, division, modulus, exponentiation, and floor division.
Example: +, -, *, /, %, **, //


# +, -, *, /, %, **, //
x = 10
y = 20
# z = x + y
# z = x - y
# z = x * y
# z = x / y
# z = x % y

x = 10
y = 5
# z = x ** y
# z = x // y
# print(z)

Comparison (Relational) operators: Used to compare values. These operators return True or False based on the comparison.
Example: ==, !=, >, <, >=, <=

x = 10
y = 20

print(x == y)
print(x != y)
print(x >= y)
print(x <= y)
print(x < y)
print(x > y)

Assignment(Shorthand) operators: Used to assign values to variables.
Example: =, +=, -=, *=, /=, %=, **=, //=

x = 10
# x = x + 20
x += 20
print(x)

Logical operators: Used to perform logical operations. These operators work on Boolean values and return Boolean results.
Example: and, or, not

# and, or, not
x = True
y = True
z = False
a = 1
b = 0

# X Y Z and   or
# T T T True  True
# F T T False True 
# T F T False True
# T T F False True
# F F F False False

print(not True)
print( not False)

# print(x and y and z)

Membership operators: Used to test whether a value is a member of a sequence (such as a string, list, or tuple).
Example: in, not in

name = "brijesh gondaliya"
print('p' in name )
print('i' in name )
print('ije' in name )
print('ije' not in name )

Identity operators: Used to compare the memory locations of two objects.
Example: is, is not
x = 10
y = 10
print(y is x)
print(y == x)
print(x is not  y)
print(y != x)

Bitwise operators: Used to perform bit-level operations.
Example: &, |, ^, ~, <<, >>


The expression z = ~x in Python performs a bitwise NOT operation on the variable x and assigns the result to the variable z.

Here's an explanation of the bitwise NOT operation and how it works:

Bitwise NOT (~): The bitwise NOT operation, also known as one's complement, flips each bit of the operand, changing 0s to 1s and 1s to 0s.
Let's illustrate this with an example using an 8-bit representation:

Suppose x is represented as 00101010 in binary. When you apply the bitwise NOT operation (~) to x, each bit is flipped:

x =      00101010
~x = 1...11010101
# x = 3 # - > 0011
# y = 5 # - > 0101
# z = x & y # - > 0001
# z = x | y # - > 0111
# z = x ^ y # - > 0110
# z = ~ x  # - > 0100
# print(x & y)
# print(x | y)
# print(x ^ y)
# print(~ x)
# print(z)
# x = 7
# x = x << 1
# x = x << 3
# print(x)

# x = 7
# x = x >> 1
# x = x >> 3
# print(x)

"""

