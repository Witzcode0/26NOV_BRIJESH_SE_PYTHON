/*
In C programming, the "if" statement is a conditional statement used for decision-making. It allows you to execute a block of code if a specified condition is true. The basic syntax of the "if" statement is as follows:

Syntax : 

if(condition){
    // code of block
}
*/

#include <stdio.h>
int main()
{
    // age  >= 18
    // weight >= 50
    int age = 15; 
    float weight = 67;
    
    
    if(age >= 18 && weight >= 50){
      printf("You can donate");
    }
}

/*
Here, "condition" is an expression that evaluates to either true or false. If the condition is true, the code inside the curly braces will be executed; otherwise, it will be skipped.
*/