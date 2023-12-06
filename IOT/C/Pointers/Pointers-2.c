//Define an integer array a and integer pointer ptr. Make ptr point to the last 
//element of a. Print the values of a in the reverse order through ptr

#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *ptr = &a[4];
    printf("Elements are : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr--;
    }
}