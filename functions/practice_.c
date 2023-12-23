#include <stdio.h>

// return_type function_name(formal_parameters) {
//     // Function body (code)
//     // Statements to perform a specific task

//     // Optional: return statement to return a value of the specified return type
// }

// [without return_type, with parameter]

void add(int a, int b){
    printf("%d", a + b);
}

int main() {
    add(130,20);
    return 0;
}

// [without return_type, without parameter]
#include <stdio.h>

void add(){
    int a = 10, b=10;
    printf("%d", a + b);
}

int main() {
    add();
    return 0;
}

// [with return_type, without parameter]

#include <stdio.h>

int add(){
    int a = 10, b=10;
    return a + b;
}

int main() {
    int c = add();
    printf("%d", c);
    return 0;
}


// [with return_type, with parameter]

#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main() {
    int c = add(10,20);
    printf("%d", c);
    return 0;
}



#include <stdio.h>

int main() {
    
    int a = 10;
    int a = 20;
    int A(){
        
        return a;
    }
    
    printf("%d", A());

    return 0;
}