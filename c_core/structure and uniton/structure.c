/*
In the C programming language, a structure is a special data type. Multiple members of various data kinds can be held in a single structure. Structure elements are stored in contiguous memory regions and may be accessed and retrieved at any time. A member or field is a data object in a structure.

syntax :
struct structure_name{
    data_type var1;
    data_type var2;
    data_type var3;
};
*/

#include <stdio.h>
#include <string.h>

struct book{
  char name[100];
  int page;
  float price;
};

int main() {
    struct book b1;
    strcpy(b1.name, "python");
    b1.page = 499;
    b1.price = 356.75;

    printf("Book name : %s\n",b1.name);
    printf("Page : %d\n", b1.page);
    printf("Price: %f\n", b1.price);
    
    struct book b2;
    strcpy(b2.name, "java");
    b2.page = 233;
    b2.price = 456.75;

    printf("Book name : %s\n",b2.name);
    printf("Page : %d\n", b2.page);
    printf("Price: %f\n", b2.price);
    return 0;
}







#include <stdio.h>
#include <string.h>

struct book{
  char name[100];
  int page;
  float price;
}b1, b2;

int main() {
    strcpy(b1.name, "python");
    b1.page = 499;
    b1.price = 356.75;

    printf("Book name : %s\n",b1.name);
    printf("Page : %d\n", b1.page);
    printf("Price: %f\n", b1.price);
    
    strcpy(b2.name, "java");
    b2.page = 233;
    b2.price = 456.75;

    printf("Book name : %s\n",b2.name);
    printf("Page : %d\n", b2.page);
    printf("Price: %f\n", b2.price);
    return 0;
}