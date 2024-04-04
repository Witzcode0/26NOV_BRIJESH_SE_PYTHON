# class math_:
#     def sum(self, a, b):
#         print(a + b)

#     def sum(self, a, b, c):
#         print(a + b + c)

# obj = math_()
# obj.sum(10, 20, 30)

# x = 10
# x = 20
# print(x)

# class math_:
#     def sum(self, a = None, b = None, c = None):
#         if(a != None and b != None and c != None):
#             print(a + b + c)
#         elif(a != None and b != None):
#             print(a + b)
    
# obj = math_()
# obj.sum(10, 20)

# class parent:
#     def info(self):
#         print("I am from parent class")

# class child(parent):
#     def __init__(self):
#         self.parent_method = super().info()

#     def info(self):
#         # super().info()
#         self.parent_method
#         print("I am from child class")

# obj = child()
# obj.info()