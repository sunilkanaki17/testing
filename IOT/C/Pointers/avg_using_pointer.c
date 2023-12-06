/*Write a function int average(int *values) where values is an array of integers. The function should return the average of the elements in the array values. The last element of values will be 0
Here is the usage
int average(int *values);
main()
{
Int x[] =  {101, 207, 302, 407, 508,  78, 801, 0};
Int y[] =  {191, 299, 3110, 413, 514,  617, 718, 819, 0};
printf(“average of x = %d\n”, average(x));
printf(“average of y = %d\n”, average(y));
}*/

#include<stdio.h>

int average(int *values)
{
    int sum=0,c=0;
    while(*values!=0)
    {
        sum+=*values;
        c++;
        values++;
    }
    return (sum/c);  
}

int main()
{
    int x[] =  {101, 207, 302, 407, 508,  78, 801, 0};
    int y[] =  {191, 299, 3110, 413, 514,  617, 718, 819, 0}; 
    printf("average of x = %d\n", average(x));
    printf("average of y = %d\n", average(y));
}
