#include <stdio.h>
#define FELIZ 1
#define TRISTE 0

int estado = TRISTE;

void ser_feliz();
void print_estado();

int main() {
    print_estado();
    ser_feliz();
    print_estado();
}

void ser_feliz() {
    estado = FELIZ;
}

void print_estado() {
    printf("Estoy %s \n", estado == FELIZ ? "feliz" : "triste");
}

// Imprime "Estoy feliz".
// El scope de estado es file scope, ya que es una varible global y puede ser accedida en cualq lugar del archivo luego de su ejecucion.
// La duracion es estatica, ya que es una varible global y existe durante la ejecucion de todo el programa, se destruye una vez que el
// programa termina.