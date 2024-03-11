"""
Tuple - Immutable, ordered, duplicat values are allowed, indexing, slicing

In Python, a tuple is an ordered collection of elements, similar to a list. However, unlike lists, tuples are immutable, meaning once they are created, their elements cannot be changed or modified. Tuples are defined using parentheses () and can contain elements of different data types. 

Syntax: 
 tuple_name = ()
 tuple_name = tuple()
 comma_tuple = 1,
"""

# t = ()
# print(type(t)) # <class 'tuple'>

# t1 = tuple()
# print(type(t1))# <class 'tuple'>

# t2 = 1,
# print(type(t2))# <class 'tuple'>

mix = (1,2, 1,1,1,'retrtf', 45.4)
l = list(mix)
l[1] = 22
mix = tuple(l)
# mix[1] = 22 # TypeError: 'tuple' object does not support item assignment
print(mix[1])
# print(len(mix))

print(mix)

# print(mix[2])
# print(mix[-1])
# print(mix[:2])

# print(dir(mix))

#  'count', 'index'

# print(mix.count(1))
# print(mix.index(45.4))


