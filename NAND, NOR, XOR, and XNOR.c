#include <stdio.h>

// Function to implement the NAND gate
int nand_gate(int a, int b) {
    return !(a && b);
}

// Function to implement the NOR gate
int nor_gate(int a, int b) {
    return !(a || b);
}

// Function to implement the XOR gate
int xor_gate(int a, int b) {
    return (a || b) && !(a && b);
}

// Function to implement the XNOR gate
int xnor_gate(int a, int b) {
    return !((a || b) && !(a && b));
}

int main() {
    // Display the header for the truth table
    printf("a b           a NAND b    a NOR b    a XOR b    a XNOR b\n");

    // Test each logic gate function with a variety of inputs
    int a, b;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d %d           %d           %d          %d          %d\n", a, b, nand_gate(a, b), nor_gate(a, b), xor_gate(a, b), xnor_gate(a, b));
        }
    }

    return 0;
}


//Test	Result
//1
//a b           a NAND b    a NOR b    a XOR b    a XNOR b
//0 0           1           1          0          1
//0 1           1           0          1          0
//1 0           1           0          1          0
//1 1           0           0          0          1
