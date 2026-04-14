#include <stdio.h>
#include <stdbool.h>

int main() {
    char c = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;
    long long ll = 12345678901;

    unsigned char uc = 200;
    unsigned short us = 8712;
    unsigned u = 246912;
    unsigned long ul = 2469135780;
    unsigned long long ull = 18446744073709551615ULL;

    float f = 3.14159;
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

    bool b = true;

    int *ptr = &i;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("long long(%lu): %lld \n", sizeof(ll), ll);
    
    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("unsigned(%lu): %u \n", sizeof(u), u);
    printf("unsigned long(%lu): %lu \n", sizeof(ul), ul);
    printf("unsigned long long(%lu): %.20llu \n", sizeof(ull), ull);

    printf("float(%lu): %f \n", sizeof(f), f);
    printf("double(%lu): %.10f \n", sizeof(d), d);
    printf("long double(%lu): %.20Lf \n", sizeof(ld), ld);

    printf("bool(%lu): %d \n", sizeof(b), b);

    printf("puntero int(%lu): %p %d \n", sizeof(ptr), (void*)ptr, *ptr);

    return 0;
}