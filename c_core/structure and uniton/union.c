/*
A union is a data type that has been specified by the user. It’s similar to the structure, except that all of its members begin at the same memory position. 

The union stores a collection of items of diverse data kinds in the same memory region.

A user can create a union with numerous members, but only one member can hold a value at any given moment. 

The total storage space required by the union’s biggest data member is equal to the storage space allotted for the union variable.


syntax :
union [union name]

 {

type member_1;

type member_2;

. . .

type member_n;

};
*/

#include <stdio.h>
#include <string.h>

union book{
  char name[100];
  int page;
  float price;
}b1, b2;

int main() {
    strcpy(b1.name, "python");
    b1.page = 499;
    b1.price = 356.75;

    printf("Book name : %s\n",b1.name);
    printf("Page : %d\n", b1.page);
    printf("Price: %f\n", b1.price);
    
    strcpy(b2.name, "java");
    b2.page = 233;
    b2.price = 456.75;

    printf("Book name : %s\n",b2.name);
    printf("Page : %d\n", b2.page);
    printf("Price: %f\n", b2.price);
    return 0;
}


// https://unacademy.com/content/cbse-class-11/difference-between/difference-between-structure-and-union-in-c/