#include <stdio.h>

int main() {
    int primo[9], i, j, ePrimo;

    for (i = 0; i < 9; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &primo[i]);
    }

    for (i = 0; i < 9; i++) {
        ePrimo = 1; 

        if (primo[i] <= 1) {
            ePrimo = 0; 
        } else {
            for (j = 2; j * j <= primo[i]; j++) {
                if (primo[i] % j == 0) {
                    ePrimo = 0;
                    break;
                }
            }
        }

        if (ePrimo) {
            printf("Este numero e primo: %d e sua posicao e: %d\n", primo[i], i + 1);
        }
    }

    return 0;
}
