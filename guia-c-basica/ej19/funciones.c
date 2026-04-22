#include <stdio.h>

int g = 10; // Variable global, existe y se puede acceder durante toda la ejecucion del programa.

void functionA() {
    int a = 20; // Variable local, se destruye al finalizar la ejecucion de la funcion.
    static int b = 30; // Variable local, estatica, se destruye al finalizar el programa

    printf("\n Dentro de functionA: \n");
    printf(" g = %d \n", g); 
    printf(" a = %d \n", a);
    printf(" b = %d \n", b);

    // Modificacion de varibles
    g += 5;
    a += 10;
    b += 5;
}

void functionB() {
    int a = 40; // Variable local, se destruye al finalizar la funcion.
    static int c = 50; // Variable local, estatica, no se destruye al finalizar la funcion.

    printf("\n Dentro de functionB: \n");
    printf(" g = %d \n", g);
    printf(" a = %d \n", a);
    printf(" c = %d \n", c);

    //Modificacion de variables
    g += 5;
    a += 10;
    c += 5;
}

int main() {
    printf("Dentro de main \n");
    printf(" g = %d \n", g);

    functionA();
    functionB();
    functionA();
    functionB();

    printf("\n Final en main: \n");
    printf(" g = %d \n", g);

    return 0;
}

// Imprime:
// g = 10
// Dentro de functionA:
// g = 10
// a = 20
// b = 30
// Dentro de functionB:
// g = 15
// a = 40
// c = 50
// Dentro de functionA:
// g = 20
// a = 20
// b = 35
// Dentro de functionB:
// g = 25
// a = 40
// c = 55
// Final en main:
// g = 30