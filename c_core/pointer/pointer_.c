/* In C programming, a pointer is a variable that stores the memory address of another variable. It is a powerful feature of the language that allows for dynamic memory allocation and manipulation.

Declaration and Initialization:

To declare a pointer, you use the * (asterisk) symbol. 

data_type * ptr;
float *price;

To initialize a pointer, you can assign it the address of a variable of the appropriate type:

int x = 10;
int *ptr = &x; // ptr now holds the address of x

Accessing Value via Pointers:
o access the value at the memory address stored in a pointer, you use the * operator (dereferencing):

int y = *ptr; // y is now 10 (the value at the address stored in ptr)

*/


#include <stdio.h>

int main()
{
    int x = 10;
    int *y;
    y = &x;
    printf("%d\n", x);
    printf("%d\n", *y);
    return 0;
}
