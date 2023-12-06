#include <stdio.h>

int main() {
    unsigned int x = 0xFF20; //1111 1111 0010 0000
    x |= (1 << 4) | (1 << 7); // Set bits 4 and 7
    x ^= (1 << 5) | (1 << 6); // Toggle bits 5 and 6

    printf("Register Value: 0x%X\n", x); //1111 1111 1101 0000

    return 0;
}
