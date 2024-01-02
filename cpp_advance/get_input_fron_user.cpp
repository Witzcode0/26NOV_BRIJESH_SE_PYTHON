// identifiers/variables/datatypes code in c++
#include <iostream>
using namespace std;

int main() {
    string name;
    
    cout<<"Enter your name: ";
    // cin>>name;
    getline(cin, name);
    
    cout<<name;

    return 0;
}


// identifiers/variables/datatypes code in c++
#include <iostream>
using namespace std;

int main() {
    int age;
    float weight;
    
    cout<<"Enter your age and weight";
    cin>>age>>weight;
    
    cout<<age<<endl;
    cout<<weight;
    

    return 0;
}