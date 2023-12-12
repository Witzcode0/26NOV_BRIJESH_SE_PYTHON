// https://www.asciitable.com/

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