#include <stdio.h>

int main() {
    int ano = 2020;
    int anoAtual;
    float salario = 1000.0;
    float percentual = 1.5;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    while (ano < anoAtual) {
        salario = salario + (salario * percentual / 100);
        percentual = percentual * 2;
        ano++;
    }

    printf("Novo salario = %.2f\n", salario);

    return 0;
}

