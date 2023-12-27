#include<stdio.h>

int main(){
    // step-1
    FILE *f;

    // step-2
    f = fopen("example.txt", "w");

    if (f == NULL){
        printf("Unable to create the file.\n");
        return 1;
    }else{
        printf("File created succerssfully\n");
    }

    fclose(f);
    return 0;
}
