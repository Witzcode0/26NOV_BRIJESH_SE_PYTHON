"""

In Python, a variable is a symbolic name that represents or refers to a value stored in memory. Variables are used to store data that can be manipulated or referenced in a program. Unlike some other programming languages, Python does not require explicit declaration of variables or their data types; instead, the type of a variable is determined dynamically based on the value assigned to it.


Syntax :
-
variable_name = value


Here's a summary of key points about variables in Python:

Assignment: Variables are created when a value is assigned to them using the assignment operator (=). For example:

x = 10
name = "John"


Dynamic Typing: Python is dynamically typed, meaning you don't have to explicitly specify the data type of a variable. Python infers the type based on the value assigned to it.

x = 10        # integer
name = "John" # string


Variable Names: Variable names can contain letters, numbers, and underscores, but they cannot start with a number. They are case-sensitive.

my_variable = 42
My_Variable = "Hello"

Reassignment: Variables can be reassigned to new values at any point in the program.

x = 10
x = 20

Variable Scope: Variables can have different scopes depending on where they are defined. Global variables are accessible throughout the entire program, while local variables are confined to the block of code where they are defined.

Memory Management: Python handles memory management and garbage collection automatically. Variables are created and destroyed as needed, and memory is reclaimed when variables are no longer in use.

"""

# num1 = 10
# print(type(num1))
# num2 = 20.4
# print(type(num2))


# num1, num2 = 10, 20.4
# print(num1)
# print(num2)

# num1 = int(input("Enter your num1: "))
# print(num1 + 10) # TypeError: can only concatenate str (not "int") to str

# num1, num2 = input("Enter your num1 and num2 sep by comma: ").split(',')
# num_1 = int(num1)
# num_2 = int(num2)
# print(type(num_1))
# print(type(num_2))

# num1 = num2 = 10
# print(num1+num2)

# num1 = 10
# num2 = 10
# print(id(num1))
# print(id(num2))