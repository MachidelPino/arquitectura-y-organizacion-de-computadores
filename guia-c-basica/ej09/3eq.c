#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void imprimir_bits32(uint32_t x) {
    for (int i = 31; i >= 0; i--) {
        printf("%u", (x >> i) & 1u);
        if (i % 4 == 0) printf(" ");
    }
}

int main() {
    uint32_t a = 0xE0000000;
    uint32_t b = 0xFFFFFFFF;

    uint32_t bits_altos = a >> 29;
    uint32_t bits_bajos = b & 0x7;

    imprimir_bits32(bits_altos);
    printf(" == ");
    imprimir_bits32(bits_bajos);
    printf("? \n");

    bool res = bits_altos == bits_bajos;

    printf("%s \n", res ? "True" : "False");

    return 0;
}