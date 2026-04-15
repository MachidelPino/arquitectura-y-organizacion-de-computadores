#include <stdio.h>

int main() {
    float f = 8.1;
    double d = 0.1;

    printf("Imprimo como float: %f \n", f);
    printf("Imprimo como double: %f \n", d);

    int ftoi = (int) (f);
    int dtoi = (int) (d);

    printf("Cast de float a int: %d \n", ftoi);
    printf("Cast de double a int: %d \n", dtoi);

    return 0;
}

// Al hacer el cast se pierde la informacion despues del punto