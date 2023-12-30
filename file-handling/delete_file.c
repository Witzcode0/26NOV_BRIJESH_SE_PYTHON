#include<stdio.h>

int main(){
    char file_path[] = "example.xlsx";

    int result = remove(file_path);

    if (result == 0){
        printf("File deleted: %s",file_path);
    }else{
        printf("Unable to delete the file");
    }

    return 0;
}
