#include<iostream>
using namespace std;

// class
class Person{
    private: // access specifiers
    // data member
    string name;
    int age;
    float weight;

    // member function
    void display(){
        cout<<"Person information"<<endl;
        cout<<"Full name : "<<name<<endl;
        cout<<"Your age is : "<<age<<endl;
        cout<<"Your weight is :"<<weight<<endl;
    }
};



int main(){

    // create object
    Person p1;
    p1.name = "brijesh gondaliya";
    p1.age = 28;
    p1.weight = 63;
    p1.display();

    Person p2;
    p2.name = "raj gondaliya";
    p2.age = 22;
    p2.weight = 73;
    p2.display();

    return 0;
}
