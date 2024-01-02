#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    // printf("%d", numbers[4]);
    for(int start =0; start<5;start++){
        printf("%d\n", numbers[start]);
    }
    return 0;
}



#include <stdio.h>

int main() {
    int marks[5] = {34, 45, 30, 44, 35};
    
    int len = sizeof(marks)/sizeof(marks[0]);
    int total = 0;
    for(int start =0; start<5;start++){
        total += marks[start]; 
    }
    printf("%d", total/len);
    return 0;
}

#include <stdio.h>

int main() {
   int matrix1[3][3] = {
       {1,2,3},
       {4,5,6},
       {7,8,9}
   };
   
  int matrix2[3][3] = {
      {11,22,33},
      {44,55,66},
      {77,88,99}
    };
   
   for(int row = 0; row < 3; row++ ){
       for(int col = 0; col<3; col++){
          printf("%d\t", matrix1[row][col] * matrix2[row][col]);
        printf("*");
       }
       printf("\n");
   }
   


    return 0;
}