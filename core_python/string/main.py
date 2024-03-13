
# In Python, a string is a sequence of characters enclosed within either single quotes ('), double quotes ("), or triple quotes (''' or """). 

"""
Strings can contain letters, numbers, symbols, and whitespace characters. They are immutable, meaning once created, their contents cannot be changed.

syntax:
str_name = 'this is a python code'
str_name = "this is a python code"
str_name = '''this is a python code'''
"""

code = "python"
# print(len(code))
# print(type(code))

# access a string
# print(code)

#indexing(+/-)
# print(code[0])
# print(code[-2])

# slicing(+/-)
# print(code[2:4])
# print(code[::-1])

# print("\\")
# print("\\\\")
# print("\"")
# print("\'")
# print("start\nend")
# print("start\tend")

# name = "my name is 'brijesh'"
# # name = 'my name is "brijesh"'
# name = 'my name is \'brijesh\''
# print(name)

name = "MolMeh TEChnoLoGy PvT. LTd."

# print(name.lower())
# print(name.upper())
# print(name.title())
# print(name.capitalize())
# print(name.swapcase())

# print(len(name.split(' ')))

# code = "     php    "
# print(len(code))

# print(code.strip())
# print(code.rstrip())
# print(code.lstrip())
# print(len(code.lstrip()))

# data = "this is a    python co  de"
# print(data.replace(" ", ''))

# code = "python"
# code[0] = 'j' # TypeError: 'str' object does not support item assignment

# print(code)

test = "--"

# print(len(test.center(3)))
# print(test.center(8, '*'))

# print(test.find('-'))

# list_alpha = ['1','2','3','4','5']
# print('-'.join(list_alpha))

# string formating

# otp = 256463
# time = 10
# message = f"Your OTP for resetting your password is {otp}. Please use this code within {time}min."
# message = "Your OTP for resetting your password is {}. Please use this code within {}min.".format(otp,time)
# message = "Your OTP for resetting your password is {0}. Please use this code within {1}min.".format(otp,time)
# message = "Your OTP for resetting your password is %d. Please use this code within %dmin." % (otp,time)
# price = 300.54345435
# message = "Python book price is %.2f" % (price)
# print(message)

# print(dir(code))

# code = "this is a python code"

# print(code.startswith('this'))
# print(code.startswith('This'))
# print(code.endswith('This'))
# print(code.endswith('code'))

password = "Admin123"
password = "Admin@123"
password = "123"
password = "hjdgjsyu"

# print(password.isalpha())
# print(password.isdigit())
# print(password.isalnum())
# print(not password.isalnum())

ch_occor = dict()
unique_ch = ''
sentance = "this is a python code"
for ch in sentance:
    if ch not in unique_ch:
        unique_ch += ch
        ch_occor.update({ch:sentance.count(ch)})
print(ch_occor)