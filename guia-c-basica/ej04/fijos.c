#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t i8 = 127;
    uint8_t ui8 = 255;
    int16_t i16 = -32768;
    uint16_t ui16 = 0;
    int32_t i32 = 2147483647;
    uint32_t ui32 = 0;
    int64_t i64 = 1;
    uint64_t ui64 = 0;

    printf("Enteros con Signo: \n");
    printf("Entero de 8 bits(%lu): %d \n", sizeof(i8), i8);
    printf("Entero de 16 bits(%lu): %d \n", sizeof(i16), i16);
    printf("Entero de 32 bits(%lu): %d \n", sizeof(i32), i32);
    printf("Entero de 64 bits(%lu): %ld \n", sizeof(i64), i64);

    printf("\n");
    printf("Enteros sin Signo: \n");
    printf("Entero de 8 bits(%lu): %d \n", sizeof(ui8), ui8);
    printf("Entero de 8 bits(%lu): %d \n", sizeof(ui16), ui16);
    printf("Entero de 8 bits(%lu): %d \n", sizeof(ui32), ui32);
    printf("Entero de 8 bits(%lu): %ld \n", sizeof(ui64), ui64);

    return 0;
}