"""
In Python, a function is a block of reusable code that performs a specific task. Functions are defined using the def keyword followed by the function name, parentheses containing zero or more parameters, and a colon.

syntax:
def function_name(para1, para2,...paran):
    block of code

function_name(value1, value2,...,valuen) # call the function
"""

# x = 10
# y = 20
# print(x + y)

# a = 30
# b = 40
# print(a + b)

# def add_tow_numbers(a,b):
#     print(a + b)

# add_tow_numbers(10, 20)
# add_tow_numbers(30, 40)
# add_tow_numbers('brijesh', 'gondaliya')
# add_tow_numbers(23, 34.5)

# types of parameters
# 1] positional para
def add_tow_numbers(a,b,c):
    print(a + b + c)

# add_tow_numbers(10,20) # TypeError: add_tow_numbers() missing 1 required positional argument: 'c'
# add_tow_numbers(10,20,30)


# 2] default para
def fullname(first_name=None, last_name=None):
    print(first_name, ' ', last_name)

# fullname('brijesh', 'gondaliya')    
# fullname('brijesh')    


# 3] keyword para
# def generate_bill( num, tomato=20, lamon=200):
#     print(num)
#     print(tomato + lamon)

# generate_bill(20, tomato=50)

# 4] variable length para
# *args - value
# **kwargs - key_value
    
# def n_number_sum(*numbers):
#     print(type(numbers))
#     # print(sum(numbers))
#     total = 0
#     for num in numbers:
#         total += num
#     print(total)

# n_number_sum(1,2,3,4,5,6,7,8,9,10, 45, 200)
    
# def generate_bill(**products):
#     import datetime
#     print(f"JioMart")
#     print(f"Date: {datetime.datetime.now().date()} Time: {datetime.datetime.now().strftime('%I:%M %p')}")
    
#     print("-"*20)
#     # print(type(products))
#     total = 0
#     for key, price in products.items():
#         print(key, price)
#         total += price
#     print("-"*20)
#     print(f"Total amount: ", total)

# generate_bill(a=23, b=45, c=100)


# def add_tow_numbers(a,b,c):
#     return a + b + c, a * b * c

# res = add_tow_numbers(10, 20, 30)
# print(res[0])
# print(res[1])
    
# sum = lambda x,y:x+y
# print(sum(10, 20))
    
# nums = [1,2,3,4,5]
# print(list(map(lambda x:x*x*x, nums)))
    
x = 20 # global var
def test():
    global x
    x = 10 # local var
    print(x)

test()
print(x)