#include <stdio.h>

struct punto {
    float x;
    float y;
    float z;
};

int main() {
    struct punto p1;
    p1.x = 1.0;
    p1.y = 2.0;
    p1.z = 3.0;

    printf("punto: (%f, %f, %f) \n", p1.x, p1.y, p1.z);
    return 0;
}
