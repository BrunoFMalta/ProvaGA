//Bruno Felipe Malta - Ex 01 B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    srand(time(NULL));

    int num = (rand() % 41) * 2 + 20;

    printf("O numero sorteado: %d\n", num);


    return 0;
}
