// v2.0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int n_bit;
    int a, b;
    unsigned int ua;
    float f;
    float fa, fb;
    
    printf("Il tipo di dato \"int\" memorizza interi _con_ segno e occupa %d byte\n", sizeof(int));
    n_bit = sizeof(int) * 8; // dimensione in bit
    a = 17;
    printf("Stampa 000: %d + 1 = %d\n", a, a+1);
    a = pow(2, n_bit-1) - 1;
    printf("====> 2^(n_bit-1) - 1 = %d\n", a);
    printf("Stampa 001: %d + 1 = %d\n", a, a+1);
    printf("Stampa 002: %d + 10 = %d\n", a, a+10);
    a = -pow(2, n_bit-1);
    printf("====> -(2^(n_bit-1)) = %d\n", a);
    printf("Stampa 003: %d - 1 = %d\n", a, a-1);
    printf("Stampa 004: %d - 10 = %d\n", a, a-10);
    
    printf("\nIl tipo di dato \"unsigned int\" memorizza interi _senza_ segno e occupa %d byte.\n", sizeof(unsigned int));
    n_bit = sizeof(unsigned int) * 8; // dimensione in bit
    ua = 123;
    printf("Stampa 100: %u + 1 = %u\n", ua, ua+1);
    ua = pow(2, n_bit) - 1;
    printf("====> 2^(n_bit) - 1 = %u\n", ua);
    printf("Stampa 101: %u + 1 = %u\n", ua, ua+1);
    printf("Stampa 102: %u + 10 = %u\n", ua, ua+10);
    ua = 0;
    printf("Stampa 103: %u - 1 = %u\n", ua, ua-1);
    printf("Stampa 104: %u - 10 = %u\n", ua, ua-10);
    
    
    a = 10;
    b = 2;
    f = a/b;
    printf("\nStampa 200: %d / %d = %f\n", a, b, f);
    
    a = 10;
    b = 3;
    f = a/b;
    printf("Stampa 201: %d / %d = %f\n", a, b, f);
    
    a = 10;
    b = 6;
    f = a/b;
    printf("Stampa 202: %d / %d = %f\n", a, b, f);
    
    // Se compili con Dev-C++, togli il commento dalla linea seguente
    //system("pause");
            
    return (EXIT_SUCCESS);
}

