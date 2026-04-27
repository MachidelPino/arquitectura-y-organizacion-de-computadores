#define NAME_LEN 50

typedef struct {
    int elo;
    char name[NAME_LEN + 1];
    int ranking;
} player_t;

player_t player1 = { 2800, "Magnus Carlsen", 1 };
player_t player2 = { 2700, "Fabiano Caruana", 2 };
player_t player3 = { .name = "Hikaru Nakamura",
                     .ranking = 3,
                     .elo = 2600}; // forma alternativa