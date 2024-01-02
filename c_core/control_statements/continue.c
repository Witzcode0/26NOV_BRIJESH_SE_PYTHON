#include <stdio.h>

int main() {
    for(int num = 1; num<11; num+=1){
        if(num == 7){
            continue;
        }
        printf("%d\n", num);
    }

    return 0;
}