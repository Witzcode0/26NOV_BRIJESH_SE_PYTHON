"""
set - unindexed, unordered, duplicate value not allowed, mutable

syntax:

set_name = set()
set_name = {1,2}
"""

# s = {1,2,3}
# s = set()
# print(type(s))

# s = {1,1,1,1,2,3,4,4,5,5,5,6,6}
# fs = frozenset(s)
# # fs.add(7)
# # s[0] = 1111 # TypeError: 'set' object does not support item assignment
# print(len(fs))
# print(fs)

# tokens = frozenset((set(list(range(1,16)))))
# print(tokens)
# tokens.remove(1)
# tokens.extend([1])
# print(tokens)