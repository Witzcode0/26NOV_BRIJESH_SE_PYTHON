#include<iostream>
using namespace std;

class parent1{
    public:
    void parent1_p1(){
        cout<<"I am from parent1 class"<<endl;
    }
};

class parent2{
    public:
    void parent2_p1(){
        cout<<"I am from parent2 class"<<endl;
    }
};

class child : public parent1, public parent2{
    public:
    void child_p1(){
        cout<<"I am from child class"<<endl;
    }
};

int main(){
    child c1;
    c1.child_p1();
    c1.parent_p1();
    c1.parent2_p1();
    return 0;
}

