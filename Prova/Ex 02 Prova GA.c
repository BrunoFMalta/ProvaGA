//Bruno Felipe Malta - Ex 02

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, num2, num3;

    do {
        num = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        num3 = rand() % 10 + 1;
        
        printf("Números sorteados: %d %d %d\n", num, num2, num3);

    } while (!(num < num2 && num2 < num3));

    printf("Os números satisfazem a condição: %d %d %d\n", num, num2, num3);


    return 0;
}
