#define NAME_LEN 50
#include <stdio.h>

typedef struct monstruo {
    char nombre[NAME_LEN + 1];
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

monstruo_t evolution(monstruo_t mon) {
    monstruo_t evo = mon;

    evo.ataque += 10;
    evo.defensa += 10;

    return evo;
}

int main() {
    monstruo_t mon = {"slime", 500, 10, 10};

    printf("Nombre: %s, Vida: %d, Ataque: %f, Defensa: %f \n", 
        mon.nombre, 
        mon.vida, 
        mon.ataque, 
        mon.defensa);

    monstruo_t evo_mon = evolution(mon);

    printf("Nombre: %s, Vida: %d, Ataque: %f, Defensa: %f \n", 
        evo_mon.nombre, 
        evo_mon.vida, 
        evo_mon.ataque, 
        evo_mon.defensa);

    return 0;
}