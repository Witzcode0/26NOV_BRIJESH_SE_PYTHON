#include<iostream>
using namespace std;

class parent{
    public:
    void parent_p1(){
        cout<<"I am from parent class"<<endl;
    }
};
class child : public parent{
    public:
    void child_p1(){
        cout<<"I am from child class"<<endl;
    }
};

int main(){
    child c1;
    c1.child_p1();
    c1.parent_p1();
    return 0;
}
