#include <stdio.h>
#define FELIZ 1
#define TRISTE 0

int estado = TRISTE;

void alcoholizar();
void print_estado();

int main() {
    print_estado();
    alcoholizar();
    print_estado();
    alcoholizar(); alcoholizar(); alcoholizar();
    print_estado();
}

void alcoholizar() {
    static int cantidad = 0; // No es asignacion, no modifica la variable, solo la declara y define
    cantidad++;
    if (cantidad < 3) {
        estado = FELIZ;
    } else {
        estado = TRISTE;
    }
}

void print_estado() {
    printf("Estoy %s \n", estado == FELIZ ? "feliz" : "triste");
}

// Imprime "Estoy triste" "Estoy feliz" "Estoy triste".
// Si se quita la palabra static de la funcion, eso signfica que cada vez que termina la funcion la variable se destruye, por lo tanto,
// cada vez que vuelve a ejecutarse la funcion crea la funcion otra vez con y la define con valor 0.