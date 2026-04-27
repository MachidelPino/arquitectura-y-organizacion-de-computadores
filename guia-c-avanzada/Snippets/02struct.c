#include <stdio.h>

struct punto {
    float x;
    float y;
};

struct player {
    char nombre[50];
    struct punto posicion;
};

int main() {
    struct player player1;
    player1.posicion.x = 1.0;
    player1.posicion.y = 2.0;

    printf("Posicion del player1: (%f, %f) \n", 
        player1.posicion.x, 
        player1.posicion.y);
    return 0;
}