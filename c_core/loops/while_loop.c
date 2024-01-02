/*
In C programming, a while loop is another type of control flow statement that allows you to repeatedly execute a block of code as long as a specified condition is true.

syntax : 

while(condition){
    //code of block
}
*/

#include <stdio.h>
int main()
{
    while(1){
        int age; 
    float weight;
    
    printf("\nEnter your age: ");
    scanf("%d", &age);
    
    if(age >= 18){
        printf("Enter your weight: ");
        scanf("%f", &weight);
          if(weight >= 50){
            printf("You can donate");
          }else{
            printf("You can not donate");
          }
    } else {
      printf("You can not donate");
    }
    }
    
    
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int start = 1;
    int end = 10;
    while(start<=end){
        printf("%d ** %d = %d\n", start, start, start*start);
        start++;
    }
    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int start = 1;
    int end = 10;
    while(start<=end){
        printf("cube of %d = %d\n", start, start*start*start);
        start++;
    }
    return 0;
}

#include <stdio.h>

int main() {
    int total = 0;
    int start = 1; // Move the declaration outside the loop
    int end = 11;

    do {
        total += start;
        start++;
    } while (start <= end);

    printf("%d", total);

    return 0; 
}



#include <stdio.h>

int main()
{
  int win_num = 23;
  int flag = 1;
  int count = 0;
  while(flag){
    int guess_num;
  printf("Enter a num: ");
  scanf("%d", &guess_num);
  count++;
  
  if(win_num == guess_num){
      printf("Congrates!!!, You are win\n");
      printf("Guess count : %d", count);
      flag = 0;
  }else{
      if (guess_num<win_num){
          printf("Too low\n");
      }else{
          printf("Too high\n");
      }
  }   
  }
}
