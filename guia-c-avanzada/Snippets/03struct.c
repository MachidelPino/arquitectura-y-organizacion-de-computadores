#define NAME_LEN 50

struct {
    int elo;
    char name[NAME_LEN + 1];
    int ranking;
} player1;

int main() {
    player1.elo = 2800;
    player1.ranking = 1;

    return 0;
}