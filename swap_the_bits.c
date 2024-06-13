#include <stdio.h>

// Function to swap bits at positions pos1 and pos2 in integer x
unsigned int swapBits(unsigned int x, int pos1, int pos2) {
    // Extract the bits at pos1 and pos2
    unsigned int bit1 = (x >> pos1) & 1;
    unsigned int bit2 = (x >> pos2) & 1;

    // If the bits are the same, no need to swap
    if (bit1 == bit2) {
        return x;
    }

    // Create a mask to swap the bits
    unsigned int mask = (1 << pos1) | (1 << pos2);

    // Toggle the bits using XOR with the mask
    x ^= mask;

    return x;
}

int main() {
    unsigned int x;
    int pos1, pos2;

    // Input the integer and bit positions
    printf("Enter an integer: ");
    scanf("%x", &x);
    printf("Enter the positions pos1 and pos2 to swap: ");
    scanf("%d %d", &pos1, &pos2);

    // Swap the bits
    unsigned int result = swapBits(x, pos1, pos2);

    // Output the result
    printf("The integer after swapping bits at positions %d and %d is: %x\n", pos1, pos2, result);

    return 0;
}

