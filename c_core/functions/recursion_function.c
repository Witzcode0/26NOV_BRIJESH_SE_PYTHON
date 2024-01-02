// A recursive function is a function that calls itself in its own definition.
//  In other words, a function is said to be recursive when it can be defined in terms of itself. Recursion is a common mathematical and programming concept. It means that a function calls itself, either directly or indirectly, to solve a smaller instance of the same problem.

// (1+2) + (2+3) + (3+4) + ..... + (n + (n+1))

#include <stdio.h>

int sequence(int num){
    if (num == 1){
        return num + (num + 1);
    }else{
        return (num + (num + 1)) + sequence(num-1);
    }
}

int main() {
    printf("%d", sequence(4));
    return 0;
}


// 0 1 1 2 3 5 8 13 21.....

#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 1;
    int nth;

    for (int start = 1; start <= 10; start++) {
        

        if (start == 1) {
            printf("%d\t", n1);
        } else if (start == 2) {
            printf("%d\t", n2);
        } else {
            nth = n1 + n2;
            printf("%d\t", nth);
            n1 = n2; 
            n2 = nth;
        }

        
    }

    return 0;
}


#include <stdio.h>

int sqr(int num){
    if (num == 1){
        printf("%d\t", num * num);
        return (num * num);
    }else {
        printf("%d\t", num * num);
        return (num * num) + sqr(num-1);
    }
}

int main() {
    printf("%d", sqr(5));
    return 0;
}
