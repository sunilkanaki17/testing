#include <stdio.h>
int main() {
    unsigned int x = 0xFF60; //1111 1111 0110 0000
    x |= (1 << 2) | (1 << 3); // Set bits 2 and 3
    x &= ~((1 << 5) | (1 << 6)); // Reset bits 5 and 6
    
    printf("Register Value: 0x%X\n", x); // binary = 1111 1111 0000 1100
    return 0;
}
