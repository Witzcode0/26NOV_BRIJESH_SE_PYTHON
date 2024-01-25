#include<iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst(){
        return first;
    }

    T getSecond(){
        return second;
    }
};

int main() {
    Pair<int> f(10, 20);
    Pair<float> s(10.5, 34.2);

    cout << f.getFirst() << endl;
    cout << f.getSecond() << endl;
    cout << s.getFirst() << endl;
    cout << s.getSecond() << endl;

    return 0;
}
