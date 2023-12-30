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

//\n
