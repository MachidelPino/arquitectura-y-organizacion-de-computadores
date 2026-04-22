#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

void ser_feliz(int estado);
void print_estado(int estado);

int main() {
    int estado = TRISTE;
    ser_feliz(estado);
    print_estado(estado);
}

void ser_feliz(int estado) {
    estado = FELIZ;
}

void print_estado(int estado) {
    printf("Estoy %s \n", estado == FELIZ ? "Feliz" : "Triste");
}

// Imprime "EStoy Triste"
// Esto pasa porque al pasarlo la variable estado a ser_feliz se crea una copia de la variable, entonces al modificarla en realidad
// estamos modificando la copia y no la variable original, entonces cuando le pasamos la variable estado a print_estado, le estamos
// pasando estado = TRISTE.
// El scope de estado es block scope, puede ser accedido luego de su declaracion dentro del mismo bloque.
// La duracion de estado es automatica, la variable existe durante la ejecucion de la funcion, se destruye cuando la funcion termina.