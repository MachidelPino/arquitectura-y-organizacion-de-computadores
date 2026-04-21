#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int32_t s = 60000000;
    int32_t arreglo[6] = {0, 0, 0, 0, 0, 0};

    while (s--) {
        int i = rand() % 6;
        arreglo[i]++;
    }

    printf("[");
    for (int i = 0; i < 6; i++) {
        printf("%u", arreglo[i]);
        if (i < 6 - 1) {
            printf(", ");
        }
    }
    printf("] \n");
}