#include<iostream>
using namespace std;

class Math{
public:
    int sum(int a, int b){
        return a + b;
    }
};

class Math1: public Math{
public:
    int sum(int a, int b, int c){
        return a + b + c ;
    }
};

int main(){

    Math1 m;
    cout<<m.sum(10,20,30);

}
