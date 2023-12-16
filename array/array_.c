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