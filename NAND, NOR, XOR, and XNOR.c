#include <stdio.h>

int nand_gate(int a, int b) {
    return !(a && b);
}

int nor_gate(int a, int b) {
    return !(a || b);
}

int xor_gate(int a, int b) {
    return (a || b) && !(a && b);
}

int xnor_gate(int a, int b) {
    return !((a || b) && !(a && b));
}

int main() {
    printf("a b           a NAND b    a NOR b    a XOR b    a XNOR b\n");

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
