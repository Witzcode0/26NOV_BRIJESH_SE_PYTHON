"""
List - mutable, ordered, allow duplicate value, indexed, slicing

In Python, a list is a built-in data structure used to store collections of items. It is a mutable, ordered sequence of elements. Lists are versatile and can contain items of different data types, including numbers, strings, other lists, or any other Python objects.

syntax:

list_name = []
list_name = list()

"""
# list_name = [1,2,3]
# print(type(list_name)) # <class 'list'>
# list_name = list()
# print(type(list_name)) # <class 'list'>
# print(len(list_name))

# in c programming
# int array_name[size] = {1,2,3}

mix_array = [1, 20.4, 'python', 3 + 5.6j, True]

# Access array elements
# print(mix_array)

#indexing (+/-)
# print(mix_array[0])
# print(mix_array[1])
# print(mix_array[2])
# print(mix_array[3])
# print(mix_array[4])
# print(mix_array[5]) # IndexError: list index out of range

# code = ['p','y','t','h','o','n']
# element  (+)      (-)
# p        0        -6
# y        1        -5
# t        2        -4
# h        3        -3
# o        4        -2
# n        5        -1
# print(code[-1])
# print(code[-2])

# slicing(+/-)
# code = ['p','y','t','h','o','n']
# print(code[start:end+1:step+1])

# print(code[2:5]) # ['t', 'h', 'o']
# print(code[::1]) # ['p','y','t','h','o','n']
# print(code[::2]) # ['p', 't', 'o']
# print(code[::3]) # ['p', 'h']
# print(code[::5]) # ['p', 'n']

# print(code[::-1]) # ['n', 'o', 'h', 't', 'y', 'p']
# print(code[-2:-5:-1])

# for ele in ['p','y','t','h','o','n']:
#     print(ele.upper())

# l = list()
# print(dir(l))



# add element in list
nums = [1,2,3]
nums_ = [4,5]
# nums.append(nums_)
# nums.extend(nums_)
# nums.insert(1,nums_)

# remove element in list
# nums.clear()
# nums.remove(3)
# nums.pop()
# print(nums)



# numbers = nums.copy()
# print(numbers)
# print(id(nums))
# print(id(numbers))

# x = [1,2]
# y = [1,2]
# print(id(x))
# print(id(y))

# x = 10
# y = 10
# print(id(x))
# print(id(y))

# 'index', 'reverse',

nums = [1,1,2,3,1,1]
# print(nums.count(1))
# print(nums.count(3))
# nums.sort()
# nums.reverse()

# print(nums.index(1, 3))