#include <stdio.h>

int main() {
    float preco[10];      
    int qtd[10];           
    float totalObj[10];    
    float totalVendas = 0, comissao;
    int i, maisVendido = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o preco do objeto %d: ", i+1);
        scanf("%f", &preco[i]);

        printf("Digite a quantidade vendida do objeto %d: ", i+1);
        scanf("%d", &qtd[i]);

        totalObj[i] = preco[i] * qtd[i];  
        totalVendas += totalObj[i];      
    }

    for(i = 1; i < 10; i++) {
        if(qtd[i] > qtd[maisVendido]) {
            maisVendido = i;
        }
    }
    
    for(i = 0; i < 10; i++) {
        printf("Objeto %d: Quantidade = %d | Preco = %.2f | Total = %.2f\n",
               i+1, qtd[i], preco[i], totalObj[i]);
    }

    printf("\nValor total das vendas: R$ %.2f\n", totalVendas);
    comissao = totalVendas * 0.05;
    printf("Comissao do vendedor (5%): %.2f\n", comissao);
    printf("Salario final do vendedor: %.2f\n", 545 + comissao);

    printf("\nObjeto mais vendido: Objeto %d (quantidade: %d)\n",
           maisVendido+1, qtd[maisVendido]);

    return 0;
}
