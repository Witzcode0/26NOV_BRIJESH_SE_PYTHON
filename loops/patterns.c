// https://www.asciitable.com/


// 1	2	3	4	5	6	7	8	
// 8	7	6	5	4	3	2	1	

#include <stdio.h>

int main()
{
    int end = 8;
    // ascending
    for(int row = 1; row<=end; row++){
      printf("%d\t",row);
    }
    printf("\n");
    
    // decending
    for(end; end>=1; end--){
       printf("%d\t",end);
    }
}


#include <stdio.h>

int main() {
    for(int row = 1; row<=5;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=5;col++){
            printf("* ");
        }
        printf("\n", row);
    }

    return 0; 
}


* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *


#include <stdio.h>

int main() {
    for(int row = 1; row<=5;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            printf("* ");
        }
        printf("\n", row);
    }

    return 0; 
}

* 
* * 
* * * 
* * * * 
* * * * *

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            printf("%d ", col);
        }
        printf("\n", row);
    }

    return 0; 
}

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 


#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            printf("%c \t", col + 64);
        }
        printf("\n", row);
    }

    return 0; 
}

A 	
A 	B 	
A 	B 	C 	
A 	B 	C 	D 	
A 	B 	C 	D 	E 

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            printf("%c \t", col + 96);
        }
        printf("\n", row);
    }

    return 0; 
}


a 	
a 	b 	
a 	b 	c 	
a 	b 	c 	d 	
a 	b 	c 	d 	e 	

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            printf("%c \t", row + 96);
        }
        printf("\n", row);
    }

    return 0; 
}


a 	
b 	b 	
c 	c 	c 	
d 	d 	d 	d 	
e 	e 	e 	e 	e 


//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

int main()
{
    int end = 5;
    for(int row = 1; row<=end; row++){
      for(int col = end-row; col>=1; col--){
        printf(" ");
      }
      for(int col = 1; col<=row; col++){
        printf("*");
      }
      for(int col = 1; col<=row-1; col++){
        printf("*");
      }
      
      printf("\n");
    }
}



// Output:

// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int end = 5;
    for(int row = 1; row<=end; row++){
      for(int col = 1; col<=row-1; col++){
        printf(" ");
      }
      for(int col = end-row; col>=0; col--){
        printf("*");
      }
      for(int col = end-row; col>=1; col--){
        printf("*");
      }
      
      
      printf("\n");
    }
}


//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int end = 5;
    for(int row = 1; row<=end-1; row++){
      for(int col = end-row; col>=1; col--){
        printf(" ");
      }
      for(int col = 1; col<=row; col++){
        printf("*");
      }
      for(int col = 1; col<=row-1; col++){
        printf("*");
      }
      
      printf("\n");
    }
    for(int row = 1; row<=end; row++){
      for(int col = 1; col<=row-1; col++){
        printf(" ");
      }
      for(int col = end-row; col>=0; col--){
        printf("*");
      }
      for(int col = end-row; col>=1; col--){
        printf("*");
      }
      
      
      printf("\n");
    }
}


// 1
//  2
//   3
//    4
//     5

#include <stdio.h>

int main()
{
    int end = 5;
    for(int row = 1; row<=end; row++){
      
      for(int col = 1; col<=row; col++){
        if(row == col){
          printf("%d", col);
        }else{
          printf(" ");
        }
        
      }
      printf("\n");
    }
}


    1
   2
  3
 4
5

#include <stdio.h>

int main()
{
    int end = 5;
    for(int row = 1; row<=end; row++){
      for(int col = end-row; col>=0; col--){
        if (col == 0){
          printf("%d", row);
        }else{
           printf(" ");
        }
       
      }
      
      
      printf("\n");
    }
}


101010
101010
101010
101010
101010

#include <stdio.h>

int main()
{
    int end = 5;
    int flag = 1;
    for(int row = 1; row<=end; row++){
      for(int col = 0; col<=end; col++){
        if (flag == 1){
          printf("%d", flag);
          flag = 0;
        }else{
          printf("%d", flag);
          flag = 1;
        }
        
      }
      printf("\n");
    }
}


101010101
010101010
101010101
010101010
101010101
010101010
101010101
010101010

#include <stdio.h>

int main()
{
    int end = 8;
    for(int row = 1; row<=end; row++){
      int flag;
      if (row % 2 != 0){
        flag = 1;
      }else{
        flag = 0;
      }
      for(int col = 0; col<=end; col++){
        if (flag == 1){
          printf("%d", flag);
          flag = 0;
        }else{
          printf("%d", flag);
          flag = 1;
        }
      }
      printf("\n");
    }
}


// a 
// b c 
// d e f 
// g h i j 
// k l m n o 


int main() {
    int num = 5;
    int flag = 0;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            flag++;
            printf("%c ", flag + 96);
        }
        printf("\n", row);
    }

    return 0; 
}



1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 



int main() {
    int num = 5;
    int flag = 0;
    for(int row = 1; row<=num;row++){
        // printf("%d\n", row);
        for(int col = 1; col<=row;col++){
            flag++;
            printf("%d ", flag);
        }
        printf("\n", row);
    }

    return 0; 
}