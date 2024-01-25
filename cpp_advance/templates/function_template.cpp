#include<iostream>
using namespace std;

template <typename T>

T max_num(T a, T b){
    return (a > b) ? a : b;
}

int main(){

    int intResult = max_num(10, 5);
    cout << intResult<<endl;

    float floatResult = max_num(30.5, 3.2);
    cout << floatResult<<endl;

    double doubleResult = max_num(150.50, 12.0);
    cout << doubleResult<<endl;

    char charResult = max_num('A', 'a');
    cout << charResult;
    return 0;
}
