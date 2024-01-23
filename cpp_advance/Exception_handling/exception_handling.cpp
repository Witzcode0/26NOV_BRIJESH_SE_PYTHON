#include<iostream>
using namespace std;

int main(){
    try{
        int age = 15;
        if (age >= 18){
            cout<<"You can voting"<<endl;
        }else{
            throw(age);
        }
    } catch (int a){
        cout<<"You can not voting because of your age is"<<a<<"< 18";
    }

}
