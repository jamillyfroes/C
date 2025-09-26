#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
	float deposito, juros, rendimento, valorTotal;
	printf("\nOlá! Este programa recebe o valor de um depósito e o valor da taxa de juros, calcula e mostra: o valor do rendimento e o valor total depois do rendimento.\n");
	
	printf("\nDigite o valor do depósito: ");
	scanf("%f%*c", &deposito);
	
	printf("\nDigite o valor da taxa de juros (sem o %): ");
	scanf("%f%*c", &juros);
	
	rendimento= deposito * juros/100;
	valorTotal= deposito + rendimento;
	
	printf("\nO valor do rendimento é:  %0.2f",rendimento);
	printf("\nO valor total é:  %0.2f",valorTotal);
	
	getchar();
	return 0;
}