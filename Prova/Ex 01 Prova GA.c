//Bruno Felipe Malta - Ex 01

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;
    
    srand(time(NULL));

 
    numero = rand() % (50 - (-50) + 1) + (-50);

   
    printf("Número sorteado: %d\n", numero);

    return 0;
}
