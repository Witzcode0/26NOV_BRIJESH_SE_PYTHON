#include<stdio.h>

int main(){
    // step-1
    FILE *f;
    char data[100];

    // step-2
    f = fopen("example.txt", "r");

    if (f == NULL){
        printf("Unable to open the file.\n");
        return 1;
    }else{
        printf("File opened succerssfully\n");

        //Step-3
        fgets(data, sizeof(data),f);

        //step-4
        printf("File data is : %s\n", data);
    }

    fclose(f);
    return 0;
}
