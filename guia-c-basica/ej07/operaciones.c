#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5, b = 3, c = 2, d = 1;

    printf("a = %d, ", a);
    printf("b = %d, ", b);
    printf("c = %d, ", c);
    printf("d = %d. \n", d);

    int op1 = a + b * c / d;

    printf("a + b * c / d = %d \n", op1);

    int op2 = a % b;

    printf("a mod b = %d \n", op2);

    bool op3_1 = a == b; 
    bool op3_2 = a != b;

    printf("a == b = %d \na != b = %d \n", op3_1, op3_2);

    int op4_1 = a & b;
    int op4_2 = a | b;

    printf("a & b = %x \na | b = %x \n", op4_1, op4_2);

    int op5 = ~a;

    printf("~a = %d \n", op5);

    bool op6_1 = a && b;
    bool op6_2 = a || b;

    printf("a && b = %d \na || b = %d \n", op6_1, op6_2);

    int op7 = a << 1;

    printf("a << 1 = %d \n", op7);

    int op8 = a >> 1;

    printf("a >> 1 = %d \n", op8);

    int op9_1 = (a += b), op9_2 = (a -= b), op9_3 = (a *= b), op9_4 = (a /= b), op9_5 = (a %= b);

    printf("a += b = %d, a -= b = %d, a *= b = %d, a /= b = %d, a modeq b = %d \n", op9_1, op9_2, op9_3, op9_4, op9_5);

    return 0;
}