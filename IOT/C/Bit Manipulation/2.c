#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x = 0x1234;
    int y = 0x8888;
    printf("X and Y: %x\n", x&y);
    printf("X or Y: %x\n", x|y);
    printf("X xor Y: %x\n", x^y);
}