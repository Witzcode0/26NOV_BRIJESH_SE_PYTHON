/*
In C programming, a for loop is a control flow statement that allows you to repeatedly execute a block of code based on a specified condition. The syntax of a for loop in C is as follows:

syntax :
for(start;end;start_update){
    // code of block
}

for(Initialization;Condition;Initialization_update){
    // code of block
}

Initialization: This part is executed once at the beginning of the loop. It is typically used to initialize the loop control variable.

Condition: The loop continues to execute as long as this condition is true. When the condition becomes false, the loop terminates.

Update: This part is executed after each iteration of the loop. It is usually used to update the loop control variable.
*/

#include <stdio.h>

int main() {
    
    int start = 1;
    int end = 7;
    for(start; start<=end; start+=1){
        printf("Brijesh\n");
    }
   

    return 0;
}



#include <stdio.h>

int main() {
    
    int table = 2;
    int start = 1;
    int end = 10;
    for(start; start<=end; start+=1){
        printf("%d * %d = %d\n", table, start, table * start);
    }
   

    return 0;
}