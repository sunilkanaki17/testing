//Define a 2D array a and initialize it. Declare an integer pointer and make it point 
//to a. Print the values of a through ptr

#include<stdio.h>
int main()
{
    int a[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
    int *(ptr) = a;
    printf("Elements are : ");
    for(int i=0;i<12;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}