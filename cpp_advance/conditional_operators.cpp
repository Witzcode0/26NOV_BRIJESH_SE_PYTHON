// identifiers/variables/datatypes code in c++
#include <iostream>
using namespace std;

int main() {
    int age;
    float weight;
    while(1){
        cout<<"Enter your age and weight";
    cin>>age>>weight;
    
    if ((age >= 18) && (weight >= 50)){
        cout<<"You can donate"<<endl;
    }else{
        cout<<"You can not donate"<<endl;
    }
    }
    
    

    return 0;
}