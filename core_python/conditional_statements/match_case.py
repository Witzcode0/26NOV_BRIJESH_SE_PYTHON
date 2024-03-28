"""
In Python, the case statement is introduced with the match statement as part of the Pattern Matching feature. Pattern Matching was introduced in Python 3.10. It provides a way to perform multiple conditional checks against a single variable and execute different blocks of code based on the matching pattern.

"""

def check_value(value):
    match value:
        case 0:
            print("Value is zero")
        case 1:
            print("Value is one")
        case _:
            print("Value is something else")

check_value(0)  # Output: Value is zero
check_value(1)  # Output: Value is one
check_value(5)  # Output: Value is something else
