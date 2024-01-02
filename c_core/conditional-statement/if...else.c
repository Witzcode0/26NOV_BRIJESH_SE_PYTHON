/*
In C, the "if-else" statement is used for more complex decision-making. It allows you to execute one block of code if a specified condition is true and another block of code if the condition is false. The basic syntax is as follows:

Syntax :
if (condition) {
    // Code to be executed if the condition is true
} else {
    // Code to be executed if the condition is false
}

*/

#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    } else {
        printf("x is not positive.\n");
    }

    return 0;
}

/*
In C, the "if-else" statement is used for more complex decision-making. It allows you to execute one block of code if a specified condition is true and another block of code if the condition is false. The basic syntax is as follows:

c
Copy code
if (condition) {
    // Code to be executed if the condition is true
} else {
    // Code to be executed if the condition is false
}
Here's an example:

c
Copy code
#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    } else {
        printf("x is not positive.\n");
    }

    return 0;
}
In this example, if the condition x > 0 is true, the program will execute the code inside the first set of curly braces and print "x is positive." If the condition is false, it will execute the code inside the second set of curly braces and print "x is not positive."*/

#include <stdio.h>
int main()
{
    // age  >= 18
    // weight >= 50
    int age = 15; 
    float weight = 67;
    
    
    if(age >= 18 && weight >= 50){
      printf("You can donate");
    } else {
      printf("You can not donate");
    }
}