#include<iostream>
using namespace std;

class A{
public:
    virtual void display(){
        cout<< "I am from class A"<<endl;
    }
};

class B:public A{
public:
    void display(){
        cout<< "I am from class B"<<endl;
    }
};

int main(){
    A *a;
    B b;

    a = &b;
    a->display();
}
