//Bruno Felipe Malta - Ex 03

#include <stdio.h>

int main() {
    float deslocamento[7];
    float deslocamento_total = 0;
    int diaMaiordeslocamento = 0;
    float mediadesloc;

   
    printf("Digite a quantidade de deslocamento (em cm) para os 5 dias:\n");

    for (int i = 0; i < 5; i++) {

        printf("Dia %d: ", i + 1);

        scanf("%f", &deslocamento[i]);

        deslocamento_total += deslocamento[i];

        if (deslocamento[i] > deslocamento[diaMaiordeslocamento]) {
            
            diaMaiordeslocamento = i;
        }
    }
 
    mediadesloc = deslocamento_total / 5.0;
   
    printf("Total de deslocamento acumulada nos 5 dias: %.2f cm\n", deslocamento_total);
   
    printf("Dia com maior quantidade de deslocamento: Dia %d (%.2f cm)\n", diaMaiordeslocamento + 1, deslocamento[diaMaiordeslocamento]);

    printf("Média de deslocamento: %.2f cm\n", mediadesloc);
  
    return 0;
}
