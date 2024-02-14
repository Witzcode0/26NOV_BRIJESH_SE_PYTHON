"""
In Python, data types represent the type or category of data that a variable can store. Python supports several built-in data types, including:

Numeric Types:

int: Represents integer numbers. [1, -11]
float: Represents floating-point numbers (decimal numbers).[20.3, -20.1]
complex: Represents complex numbers (numbers with a real and imaginary part). [3 + 5.6j]

Sequence Types:

str: Represents strings of characters (text).

'',"",'''''',""""""

list: Represents ordered collections of items that can be of mixed data types. - []
tuple: Represents ordered collections of items, similar to lists, but immutable (cannot be modified).- ()
range: Represents a sequence of numbers commonly used for looping. range(start, stop, step)

Mapping Type:

dict: Represents key-value pairs, where each key is associated with a value. - {'key1':'value'}

Set Types:

set: Represents an unordered collection of unique items.
frozenset: Represents an immutable set. - {1,2,3,4}
Boolean Type:

bool: Represents boolean values True and False.

None Type:
None: Represents the absence of a value or a null value.

Binary Types:

bytes: Represents a sequence of bytes, immutable.
bytearray: Represents a mutable sequence of bytes.

Iterator Types:
iter: Represents an iterator object that produces values one at a time.
Generator Types:

generator: Represents a generator function or generator expression, which produces a sequence of values lazily.
"""

page = 30
print(type(page)) # <class 'int'>

price = 20.0
print(type(price)) # <class 'float'>

complex_num = 3 + 5j
print(type(complex_num)) # <class 'complex'>

name = 'brijesh'
print(type(name))  # <class 'str'>
name = "brijesh"
print(type(name))  # <class 'str'>
name = """brijesh"""
print(type(name))  # <class 'str'>
name = '''brijesh'''
print(type(name))  # <class 'str'>

fruites = []
print(type(fruites)) # <class 'list'>

fruites = ()
print(type(fruites)) # <class 'tuple'>

contact = {
    'a':['aman', 'ajay'],
    'b':['babbn'],
    'c':['chagan']
}

print(type(contact)) # <class 'dict'>

unique = {1,1,1,2,3}
# print(unique)
print(type(unique)) # <class 'set'>

is_admin = True
print(type(is_admin)) # <class 'bool'>

mobile = None
print(type(mobile)) # <class 'NoneType'>