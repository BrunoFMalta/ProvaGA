// Bruno Felie Malta - Exercicio 04

#include <stdio.h>

int main() {

    float medidas[8];
    float soma = 0.0;
    int alertas = 0;


    printf("Insira as 8 medicoes de poluicao do ar (em ppm):\n");

    for (int i = 0; i < 8; i++) {

        scanf("%f", &medidas[i]);

        soma += medidas[i];

        if (medidas[i] > 150) {

            printf("Alerta: Medicao %d excedeu 150 ppm.\n", i+1);

            alertas++;
        }
    }

    float media = soma / 8;

    printf("A media de poluição diária eh: %.2f ppm\n", media);

    printf("Numero total de medições que geraram um alerta: %d\n", alertas);

    return 0;
}