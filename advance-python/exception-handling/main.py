"""
Exception handling in Python refers to the mechanism through which errors and exceptional situations are managed within a program. Errors can occur during the execution of a program due to various reasons such as incorrect input, resource unavailability, or programming mistakes. Python provides a robust and flexible way to handle these errors using try, except, finally, and raise statements.

Here's a basic overview of how exception handling works in Python:

try: The try block is used to enclose the code that might raise an exception. If an exception occurs within this block, Python looks for an appropriate except block to handle the exception.

except: The except block is used to catch and handle exceptions. It specifies the type of exception it can catch. If an exception of the specified type occurs within the try block, the corresponding except block is executed.

finally: The finally block is optional and is used to define code that should be executed regardless of whether an exception occurred or not. It is commonly used for releasing resources or cleaning up operations.

raise: The raise statement is used to explicitly raise an exception. You can raise built-in exceptions or create custom exceptions by subclassing the Exception class.

assert: The assert statement is a debugging aid that tests a condition as true during runtime. If the condition is false, it raises an AssertionError exception with an optional error message.
"""

# print("start")
# print(a)
# print("end")

# print("start")


# try:
#     a = int(input("Enter a: "))
#     b = int(input("Enter b: "))
#     result = (a / b) + '10'
# except NameError:
#     print("you print a but a is not define")
# except ZeroDivisionError:
#     print("you can not assign 0 value for b var")
# except ValueError:
#     print("Invalid input please enter only number")
# except TypeError:
#     print("You can not concate float value with string")
# except Exception as e:
#     print(f"ERROR: {e}")
# else:
#     print(result)

# finally:
#     print("I will execute anyway")

# print("end")


# bal = 10000
# withdraw = 20000

# if withdraw < bal:
#     bal -= withdraw
#     print(f"Your remaining amount: {bal}")
# else:
#     raise ValueError("Insufficent blance")

# bal = 10000
# withdraw = 20000

# assert withdraw < bal, "Insufficent blance"