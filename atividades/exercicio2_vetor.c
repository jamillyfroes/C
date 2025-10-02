#include <stdio.h>

int main() {
    char carroM[5][50];   
    float consumo[5];   
    int i, maisEconomico = 0;

    // Entrada de dados
    for(i = 0; i < 5; i++) {
        printf("Digite o nome do modelo do %d carro: ", i+1);
        scanf("%s", carroM[i]);

        printf("Digite o consumo do %d carro(quantos km ele faz com 1 litro de combustivel): ", i+1);
        scanf("%f", &consumo[i]);
    }

    // Descobrir o mais econômico
    for(i = 1; i < 5; i++) {
        if(consumo[i] > consumo[maisEconomico]) {
            maisEconomico = i;
        }
    }

    // Resultado
    printf("\nCarro mais economico: %s (%.2f km/l)\n", carroM[maisEconomico], consumo[maisEconomico]);

    printf("\nConsumo para percorrer 1000 km:\n");
    for(i = 0; i < 5; i++) {
        float litros = 1000 / consumo[i];
        printf("%s: %.2f litros\n", carroM[i], litros);
    }

    return 0;
}
