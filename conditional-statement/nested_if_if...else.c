/*
In C, you can use nested "if-else" statements to create more complex decision-making structures. This involves placing one "if-else" statement inside another. Here's an example of nested "if-else" statements
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;

    if (x > 0) {
        if (y > 0) {
            printf("x and y are both positive.\n");
        } else {
            printf("x is positive, but y is not positive.\n");
        }
    } else {
        printf("x is not positive.\n");
    }

    return 0;
}


/*
In this example, the outer "if" statement checks if x is positive. If that condition is true, it enters the block and encounters another "if" statement inside. This inner "if" statement checks if y is positive. Depending on the combinations of values for x and y, different messages will be printed.
*/

#include <stdio.h>
int main()
{
    // age  >= 18
    // weight >= 50
    int age = 15; 
    float weight = 67;
    
    
    if(age >= 18){
      if(weight >= 50){
        printf("You can donate");
      }else{
        printf("You can not donate");
      }
    } else {
      printf("You can not donate");
    }
}