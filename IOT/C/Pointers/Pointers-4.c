/*Define a 2D array a and initialize it. Declare an integer pointer and make it point 
to a. Print the only the first element of each row of a through ptr
e.g 
int a[3][4] = {11, 12, 13, 14, 21, 22, 23, 24, 31, 32, 33, 34} 
program must print 11, 21, 31 */

#include<stdio.h>
int main()
{
    int a[3][4] = {11, 12, 13, 14, 21, 22, 23, 24, 31, 32, 33, 34};
    int (*ptr)[4] = a;
    for (int i = 0; i < 3; i++) {
        printf("%d ", *ptr[i]);
    }
}
