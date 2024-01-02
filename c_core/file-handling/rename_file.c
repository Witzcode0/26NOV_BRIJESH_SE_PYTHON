#include<stdio.h>

int main(){
    char old_file_path[] = "example.txt";
    char new_file_path[] = "new_example.txt";

    int result = rename(old_file_path, new_file_path);
    if (result == 0){
        printf("File renamed successfully: %s",new_file_path);
    }else{
        printf("Unable to rename the file");
    }
}
