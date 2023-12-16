/*
syntax :
switch(condition){
        case 1:
            //code of block
            break;
        case 2:
            //code of block
            break;
            .....
        default:
            // default case
            break;
    }
*/

#include <stdio.h>

int main() {
    int day;
    
    printf("Enter a day: ");
    scanf("%d", &day);
    
    switch(day){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("thursday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
        default:
            printf("Invalid input");
            break;
    }

    return 0;
}