#include <stdio.h>

int main() {
    int mensaje_secreto[] = {
        116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
        103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
        111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110
    };

    size_t lenght = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[lenght];

    int ilenght = (int) (lenght);

    for (int i = 0; i < ilenght; i++) {
        decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
    }

    for (int i = 0; i < ilenght; i++) {
        printf("%c", decoded[i]);
    }
    printf("\n");
}

// Se imprime: the gift of words is the gift of deception and illusion
// Pq se divide el peso total de la lista (peso de int * cant de elem) dividido el peso de un int, entonces nos queda la cant de elementos de la lista
// Depende del tamaño que tenga, si es muy grande puede dar overflow
// Se usa size_t para no tener problemas de overflow