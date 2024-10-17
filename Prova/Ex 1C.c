//Bruno Felipe Malta - Ex 01 C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num = rand() % 101;

    float decimal = num / 100.0; 

    printf("%.2f\n", decimal);
    
    return 0;
}
