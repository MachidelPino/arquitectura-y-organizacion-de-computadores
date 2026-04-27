#define NAME_LEN 50
#include <stdio.h>

struct monstruo {
    char nombre[NAME_LEN + 1];
    int vida;
    double ataque;
    double defensa;
};

int main() {
    struct monstruo monstruos[3] = {
        [0] = {"mon1", 500, 5000, 5000},
        [1] = {"mon2", 1500, 15000, 15000},
        [2] = {"mon3", 4500, 45000, 45000}
    };

    printf("Nombre: %s, Vida: %d, Ataque: %f, Defensa: %f \n", 
        monstruos[0].nombre, 
        monstruos[0].vida, 
        monstruos[0].ataque, 
        monstruos[0].defensa);
    printf("Nombre: %s, Vida: %d, Ataque: %f, Defensa: %f \n", 
        monstruos[1].nombre, 
        monstruos[1].vida, 
        monstruos[1].ataque, 
        monstruos[1].defensa);
    printf("Nombre: %s, Vida: %d, Ataque: %f, Defensa: %f \n", 
        monstruos[2].nombre, 
        monstruos[2].vida, 
        monstruos[2].ataque, 
        monstruos[2].defensa);

    return 0;
}