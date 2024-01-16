#include<iostream>
using namespace std;

class ATM{
    private:
    int pin;


    public:
    // setter method
    void set_pin(int p){
        pin = p;
    }
    // getter method
    void get_pin(){
        cout<<pin;
    }
};

int main(){
    ATM brijesh;
    brijesh.set_pin(1123);
    brijesh.get_pin();
}
