#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int32_t s = 60000000;
    int32_t arreglo[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (s--) {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        arreglo[dice1 + dice2 - 1]++;
    }

    printf("[");
    for (int i = 0; i < 12; i++) {
        printf("%u", arreglo[i]);
        if (i < 12 - 1) {
            printf(", ");
        }
    }
    printf("] \n");
}