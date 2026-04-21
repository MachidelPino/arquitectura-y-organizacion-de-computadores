#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t arreglo[6] = {1, 2, 3, 4, 5, 6};
    
    size_t length = sizeof(arreglo) / sizeof(int);
    int ilenght = (int) (length);

    printf("[");
    for (int i = 0; i < ilenght; i++) {
        printf("%u", arreglo[i]);
        if (i < ilenght - 1) {
            printf(", ");
        }
    }
    printf("] \n");

    uint32_t fst = arreglo[0];

    for (int i = 0; i < ilenght - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }

    arreglo[ilenght - 1] = fst;

    printf("[");
    for (int i = 0; i < ilenght; i++) {
        printf("%u", arreglo[i]);
        if (i < ilenght - 1) {
            printf(", ");
        }
    }
    printf("] \n");

    return 0;
}