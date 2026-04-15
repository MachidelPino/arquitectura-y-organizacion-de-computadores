#include <stdio.h>

int main() {
    int i = 5;
    int j = 5;

    printf("Valor de i = %d \n", i);
    printf("Valor de ++i = %d \n", ++i);
    printf("Valor de i = %d \n", i);

    printf("\n");

    printf("Valor de j = %d \n", j);
    printf("Valor de j++ = %d \n", j++);
    printf("Valor de j = %d \n", j);

    return 0;
}