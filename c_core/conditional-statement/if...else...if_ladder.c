/*

In C, an "if-else if" ladder is a sequence of "if" and "else if" statements that are used to check multiple conditions in a cascading manner. The program executes the code block associated with the first true condition and skips the rest of the ladder. Here's the basic syntax:

syntax : 

if (condition1) {
    // Code to be executed if condition1 is true
} else if (condition2) {
    // Code to be executed if condition2 is true
} else if (condition3) {
    // Code to be executed if condition3 is true
} else {
    // Code to be executed if none of the conditions are true
}

*/

#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    } else if (x < 0) {
        printf("x is negative.\n");
    } else {
        printf("x is zero.\n");
    }

    return 0;
}


#include <stdio.h>
int main()
{
   int score =100;
   
   if(score <= 100 && score >= 0){
     if (score >= 80){
       printf("First class");
     }else if(score >= 60){
       printf("Second class");
     }else if(score >= 40){
       printf("Third class");
     }else{
       printf("Sorry! you are failed");
     }
   }else{
     printf("Please enter valid score!!!");
   }
}