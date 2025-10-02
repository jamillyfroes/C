#include <stdio.h>

int main() {
    int numeros[10];
    int i, existe = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros maiores que 50 e suas posicoes:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] > 50) {
            printf("Numero %d na posicao %d\n", numeros[i], i);
            existe = 1;
        }
    }

    if(!existe) {
        printf("Nenhum numero maior que 50 foi encontrado.\n");
    }

    return 0;
}
