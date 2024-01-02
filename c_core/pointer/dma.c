#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    p = (int*)malloc(n * sizeof(int));
    
    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        for (i = 0; i < n; ++i) {
            int value;
            printf("Enter value:");
            scanf("%d",&value);
            p[i] = value;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", p[i]);
        }
    
    }
}




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    p = (int*)calloc(n, sizeof(int));
    
    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        for (i = 0; i < n; ++i) {
            int value;
            printf("Enter value:");
            scanf("%d",&value);
            p[i] = value;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", p[i]);
        }
    
    }
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    p = (int*)calloc(n, sizeof(int));
    
    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        for (i = 0; i < n; ++i) {
            int value;
            printf("Enter value:");
            scanf("%d",&value);
            p[i] = value;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", p[i]);
        }
        
        free(p);
    
    }
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    p = (int*)calloc(n, sizeof(int));
    
    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        for (i = 0; i < n; ++i) {
            int value;
            printf("Enter value:");
            scanf("%d",&value);
            p[i] = value;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", p[i]);
        }
        
        n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);
 
        p = (int*)realloc(p, n * sizeof(int));
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");
 
        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            int value;
            printf("Enter value:");
            scanf("%d",&value);
            p[i] = value;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", p[i]);
        }
    }
}
