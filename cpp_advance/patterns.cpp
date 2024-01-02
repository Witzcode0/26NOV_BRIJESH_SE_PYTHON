// PATTERNS in c++


/*
 * 
***
 * 
***
 * 
*/

#include <iostream>
using namespace std;

int main() {
    int num = 5;
    for(int row = 1; row<=num; row+=1){
        for(int col = 1; col<=3; col+=1){
            if (row % 2 != 0){
                if(col == 2){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                
            }else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}

/*
 **** 
******
 **** 
******
 **** 
*/


// PATTERNS in c++
#include <iostream>
using namespace std;

int main() {
    int num = 5, for_even = 6;
    for(int row = 1; row<=num; row+=1){
        for(int col = 1; col<=for_even; col+=1){
            if (row % 2 != 0){
                if((col >= 2) && (col < for_even)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                
            }else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}