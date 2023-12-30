/*

In C programming, a string is a sequence of characters stored in an array. A string in C is represented as an array of characters terminated by a null character ('\0'), which indicates the end of the string. The null character is essential for string functions to determine the end of a string.

https://www.geeksforgeeks.org/string-functions-in-c/

*/

#include <stdio.h>

int main() {
    char myString[] = "Hello, World!";

    printf("%s\n", myString);

    return 0;
}


#include <stdio.h>

int main() {
    char myString[] = {'p','y','t','h','o','n'};

    printf("%s\n", myString);

    return 0;
}


#include <stdio.h>

int main() {
    char myString[] = {'p','y','t','h','o','n'};

    printf("%c\n", myString[1]);

    return 0;
}


#include <stdio.h>

int main() {
    char myString[] = {'p','y','t','h','o','n'};
    
    int len = sizeof(myString)/sizeof(myString[0]);
  
    for(int index = 0; index<len; index++){
      // printf("%d\n", index);
      // printf("%c\n", myString[index]);
      printf("%c", myString[index]);
    }
    

    return 0;
}

#include <stdio.h>

int main() {
    char myString[] = "\\";
    
    int len = sizeof(myString)/sizeof(myString[0]);
  
    for(int index = 0; index<len; index++){
      // printf("%d\n", index);
      // printf("%c\n", myString[index]);
      printf("%c", myString[index]);
    }
    

    return 0;
}

#include <stdio.h>

int main() {
    char myString[] = "\'";
    
    int len = sizeof(myString)/sizeof(myString[0]);
  
    for(int index = 0; index<len; index++){
      // printf("%d\n", index);
      // printf("%c\n", myString[index]);
      printf("%c", myString[index]);
    }
    

    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    char fname[] = "brijesh";
    char lname[] = "gondaliya";

    printf("my name is : %s %s", fname, lname);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char fname[] = "brijesh";
    char lname[] = "gondaliya";

    printf("fname length: %d", strlen(fname));
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char fname[] = "brijesh";
    char lname[] = "gondaliya";

    printf("fname length: %d", strlen(fname));
    printf("fname sizeof: %d", sizeof(fname));
    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    char fname[] = "brijesh";
    char lname[] = "gondaliya";
    strcat(fname, lname);
    printf("fullname : %s", fname);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    char fname[] = "brijesh";
    //char lname[] = "gondaliya";
    char lname[20];
    strcpy(lname, "Gondaliya");
    strcat(fname, lname);
    printf("fullname : %s", fname);
    return 0;
}
