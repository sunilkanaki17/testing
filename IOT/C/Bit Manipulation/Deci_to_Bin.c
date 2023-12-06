#include<stdio.h>
void main()
{
    int a[100],i=0;
    int deci;
    printf("Enter a decimal number\n");
    scanf("%d",&deci);
    while(deci>0)
    {
        a[i] = deci%2;
        deci = deci/2;
        i++;
    }
    printf("Binary Number: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}