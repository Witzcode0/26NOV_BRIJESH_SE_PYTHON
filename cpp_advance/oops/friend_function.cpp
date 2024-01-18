#include<iostream>
using namespace std;

class bank{
    private:
    int pin;
};

void friend_func(){
    cout<< pin;
}

int main(){
    bank brijesh;
    brijehs.pin = 1234;
    friend_func();
    return 0;
}
