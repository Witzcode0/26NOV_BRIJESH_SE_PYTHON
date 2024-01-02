/*
In C programming, operators and operands are fundamental concepts related to expressions and operations.

Operators:
Operators in C are symbols that represent computations or operations on variables or values. They define how the operands will be manipulated. C provides a variety of operators, including arithmetic, relational, logical, assignment, bitwise, and more.

Here are a few examples of operators in C:

Arithmetic Operators: +, -, *, /, % (addition, subtraction, multiplication, division, modulus)
// arithmatic operators

#include <stdio.h>

void main() {
    printf("%d\n", 10 + 20);
    printf("%d\n", 10 - 20);
    printf("%d\n", 10 * 20);
    printf("%d\n", 10 / 20);
    printf("%d\n", 10 % 20);
}

Assignment Operator: = (assigns the value on the right-hand side to the variable on the left-hand side)

// shorthand/ assignment operators

#include <stdio.h>

void main() {
    int a = 10;
    // a = a + 20;
    // a += 20;
    // a -= 5;
    // a *= 2;
    a /= 2;
    a %= 3;
    printf("%d", a);
}

Relational/comparision Operators: ==, !=, >, <, >=, <= (equal to, not equal to, greater than, less than, greater than or equal to, less than or equal to)

// comparision operators

#include <stdio.h>

void main() {
    // 0 - False
    // 1 - True
    
    int a = 10;
    int b = 20;
    
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a < b);
    printf("%d\n", a > b);
    printf("%d\n", a <= b);
    printf("%d\n", a >= b);
}

// Logical Operators: &&, ||, ! (logical AND, logical OR, logical NOT)

#include <stdio.h>

void main() {
//   A B && ||
//   0 0 0  0
//   0 1 0  1
//   1 0 0  1
//   1 1 1  1
   
//   !
//   a = 0
//   !a = 1 - True
//   a = 1
//   !a = 0 - False

int a = 0;
int b = 1;
int c = 0;
int d = 1;


printf("%d\n", a && b);
printf("%d\n", a || b);
printf("%d\n", !a);
printf("%d\n", !b);




}

Bitwise operators are used to manipulate individual bits of binary numbers. These operators perform operations at the bit level, allowing you to work with binary representations of data. In most programming languages, bitwise operators operate on integers.

2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
128 64  32  16  8   4   2   1    

3Dec - 00000011<-bin
5Dec - 00000101<-bin
17Dec- 00010001<-bin

00010001Bin - 17

AND (&):
Performs a bitwise AND operation.
The result is 1 only if both corresponding bits are 1.

OR (|):
Performs a bitwise OR operation.
The result is 1 if at least one of the corresponding bits is 1.

XOR (^):
Performs a bitwise exclusive OR (XOR) operation.
The result is 1 if the corresponding bits are different.

NOT (~):
Performs a bitwise NOT operation.
Flips the bits, changing 0s to 1s and vice versa.

Left Shift (<<):
Shifts the bits to the left by a specified number of positions.
Fills the vacant positions with zeros.

Right Shift (>>):
Shifts the bits to the right by a specified number of positions.
Fills the vacant positions with the sign bit (for signed integers) or with zeros (for unsigned integers).


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // OR (|):
    // XOR (^):
    // NOT (~):
    // Left Shift (<<):
    // Right Shift (>>):
    
//     3Dec - 00000011<-bin
// 5Dec - 00000101<-bin
    int x = 3;  //0011
    int y = 5;  //0101
    // x &y = 1;//0001
    // x | y = 0111
    // x ^ y  = 0110
    // ¬x = 1100
    
    
    // printf("%d", x & y);
    // printf("%d", x | y);
    // printf("%d", x ^ y);
    printf("%d", ~x);

    return 0;
}\\// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x = 14;
    // printf("%d", x<<1);
    printf("%d", x<<3);

    return 0;
}



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x = 14;
    float y =3.4;
    
    
    // printf("%d", sizeof(x));
    printf("%d", sizeof(y));

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x = 14, y =15;
    
    
    (x > y)?printf("X is less than y"):printf("y is less than x");

    return 0;
}

*/


// https://youtu.be/Ik80C3VPs3E?si=UdLm_eDtCE3AJgis