# class person:
#     # data member
#     name = input("Enter your name: ") # class variable
#     age = int(input("Enter your age: "))

#     # member function
#     def speak(yoyo):
#         return "I can speak"

#     def walk(yoyo):
#         return "I can walk"
    
# obj = person() # create object

# print(obj.name)
# print(obj.age)
# print(obj.speak())
# print(obj.walk())

# obj2 = person()

# print(obj2.name)
# print(obj2.age)
# print(obj2.speak())
# print(obj2.walk())

# class class_name:
#     pass

# class register:
#     def __init__(self, username, email, password, confirm_password):
#         self.u = username
#         self.e = email
#         self.p = password
#         self.cp = confirm_password
#         # print(self.u, self.e, self.p, self.cp)

#     def user_info(self):
#         print(f"Username: {self.u}")
#         print(f"Email: {self.e}")
#         print(f"Password: {self.p}")

# user_data = []
# start = 1
# end = 3
# while(start<=end):
#     user = dict()
#     username = input('Enter your username: ')
#     email = input('Enter your email: ')
#     password = input('Enter your password: ')
#     confirm_password = input('Enter your confirm_password: ')
#     new_user =register(username, email, password, confirm_password)

#     user['username'] = username
#     user['email'] = email
#     user['password'] = password

#     print(user)
#     user_data.append(user)
#     new_user.user_info()
#     start+=1

# print(user_data)

# brijesh = register("brijesh@07", "brijesh@gmail.com", "1234", "1234")

# # print(dir(brijesh))
# brijesh.user_info()

# abhay = register("abhay@07", "abhay@gmail.com", "1234", "1234")
# abhay.user_info()

# jay = register("jay@07", "jay@gmail.com", "1234", "1234")
# jay.user_info()

# khusi = register("khusi@07", "khusi@gmail.com", "1234", "1234")
# khusi.user_info()

# shubh = register("shubh@07", "shubh@gmail.com", "1234", "1234")
# shubh.user_info()