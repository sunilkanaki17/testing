/*2. Write a function int max(int *values) where values is an array of integers. The function should return the maximum of the elements in the array values. The last element of values will be 0
 Here is the usage
int max(int *values);
main()
{
Int x[] =  {101, 207, 302, 407, 508,  78, 801, 0};
Int y[] =  {191, 299, 3110, 413, 514,  617, 718, 819, 0};
printf(“max of x = %d\n”, max(x));
printf(“max of y = %d\n”, max(y));
}*/

#include<stdio.h>

int max(int *values)
{
    int temp =values[0];
    while(*values!=0)
    {
        if(temp<*values)
        {
            temp=*values;
        }
        values++;
    }
    return temp;  
}

int main()
{
    int x[] =  {101, 207, 302, 407, 508,  78, 801, 0};
    int y[] =  {191, 299, 3110, 413, 514,  617, 718, 819, 0}; 
    printf("max of x = %d\n", max(x));
    printf("max of y = %d\n", max(y));
}
