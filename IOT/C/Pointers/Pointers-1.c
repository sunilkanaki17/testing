//Define an integer array a and integer pointer ptr. Make ptr point to a. Print the values of a through ptr

#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *ptr = a;
    printf("Elements are : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
