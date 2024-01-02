#include<stdio.h>

int main(){
    // step-1
    FILE *f;
    char data[100];

    // step-2
    f = fopen("example.txt", "w");

    if (f == NULL){
        printf("Unable to open the file.\n");
        return 1;
    }else{
        printf("File opened succerssfully\n");

        //Step-3
        printf("Enter data to write to the file: ");
        fgets(data, "%s", stdin);

        //step-4
        fprintf(f , "%s", data);
    }

    fclose(f);
    return 0;
}
