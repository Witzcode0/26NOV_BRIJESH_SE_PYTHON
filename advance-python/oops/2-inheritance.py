# single
# class A:
#     def a(self):
#         print("I am from class A")
# class B(A):
#     def b(self):
#         print("I am from class B")
    
# obj = B()
# # print(dir(obj))
# obj.a()
# obj.b()

# multilevel
# class A:
#     def a(self):
#         print("I am from class A")
# class B(A):
#     def b(self):
#         print("I am from class B")
# class C(B):
#     def c(self):
#         print("I am from class C")
    
# obj = C()
# # print(dir(obj))
# obj.a()
# obj.b()
# obj.c()

# multiple
# class A:
#     def a(self):
#         print("I am from class A")
# class B:
#     def b(self):
#         print("I am from class B")
# class C(A,B):
#     def c(self):
#         print("I am from class C")
    
# obj = C()
# # print(dir(obj))
# obj.a()
# obj.b()
# obj.c()

# herarchical
class SHAPE:
    def shape(self):
        print("I am from class shape")

class SHAPE2D(SHAPE):
    def shape2D(self):
        print("I am from class shape2D")

class CIRCLE(SHAPE2D):
    def circle(self):
        print("I am from class circle")

class SQUARE(SHAPE2D):
    def square(self):
        print("I am from class square")

class SHAPE3D(SHAPE):
    def shape3D(self):
        print("I am from class shape3D")

class CUBE(SHAPE3D):
    def cube(self):
        print("I am from class cube")

obj = CUBE()
# print(dir(obj))
obj.cube()
obj.shape()
obj.shape3D()

obj2 = SQUARE()
# print(dir(obj2))
obj2.shape()
obj2.shape2D()
obj2.square()

# hybrid