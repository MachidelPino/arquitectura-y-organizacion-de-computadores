#include <stdio.h>

int i;

int main() {
    int i = 1;

    printf("global = %d \n", i);
    printf("local = %d \n", i);

    return 0;
}

// Imprime las dos veces la varible local, en este caso 1.
// Esto pasa por shadowing. El scope mas interno tiene prioridad sobre el mas externo.