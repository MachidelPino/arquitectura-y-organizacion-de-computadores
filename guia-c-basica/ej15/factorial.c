#include <stdio.h>

int main() {
    int n, res = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido \n"); 
        return 0;
    }
    
    while (n > 0) {
        res *= n;
        n--;
    }

    printf("%d \n", res);
    return 0;
}