from abc import ABC, abstractmethod

class shape(ABC):
    @abstractmethod
    def area(self):
        pass

class triangle(shape):
    def area(self, base, height):
        print(0.5 * base * height)

class square(shape):
    def area(self, l,h,b):
        print(l * b * h)

class circle(shape):
    def area(self, r):
        print(3.14 * r * r)

t = triangle()
t.area(4,10)

s = square()
s.area(10, 10 , 10)

c = circle()
c.area(10)