#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float pes, polegadas, jardas, milhas;

    printf("\nOlá! Este programa recebe uma medida em pés, faz as conversões e mostra os resultados em: polegadas, jardas e milhas.\n");

    printf("\nDigite a medida em pes: ");
    scanf("%f%*c", &pes);

    // Conversões
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280; 

    printf("\nMedida em polegadas: %.2f", polegadas);
    printf("\nMedida em jardas: %.2f", jardas);
    printf("\nMedida em milhas: %.6f\n", milhas); 

    return 0;
}
