#include<iostream>
using namespace std;

class person{
    // data member
    private:
    int atm_pin;

    // default constructor
   // person(){
    //    cout<<atm_pin;
    //}
    public:
    // parameterized cunstructor
    person(int pin){
        atm_pin = pin;
      cout<<atm_pin<<endl;
    }
    ~person(){
        cout<<"I am a destructor";
    }

    // member function
    //void display(){
     //   cout<<atm_pin;
    //}
};

int main(){
    person p1(1111);
    person p2(1234);
    return 0;
}
