/*6. Define an array a and initialize it. Declare an array of integer pointers xptrarray.
and make it point to a. Print the only the first and last element of each row of a
through ptr*/
#include <stdio.h>

int main() {
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int* xptrarray[3]; 

    for (int i = 0; i < 3; ++i) {
        xptrarray[i] = a[i];
    }
    for (int i = 0; i < 3; ++i) {
        printf("First element of row %d: %d\n", i + 1, *(xptrarray[i]));
        int lastIndex = sizeof(a[i]) / sizeof(a[i][0]) - 1;
        printf("Last element of row %d: %d\n", i + 1, *(xptrarray[i] + lastIndex));
        printf("\n");  
    }

    return 0;
}
