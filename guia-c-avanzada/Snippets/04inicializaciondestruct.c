#define NAME_LEN 50

struct player {
    int elo;
    char name[NAME_LEN + 1];
    int ranking;
};

struct player player1 = {2800, "Magnus Carlsen", 1};
struct player player2 = {2700, "Fabiano Caruana", 2};
