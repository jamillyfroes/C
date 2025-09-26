#include<stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
	float salariobase, valorGrat, valorImposto, novosal;
	printf("\nOlá! Este programa recebe o salário base de um funcionário, calcula e mostra: o valor da gratificação, valor do imposto e o salário a receber.\n");
	printf("\nDigite o salário base do funcionário: ");
	scanf("%f%*c", &salariobase);
	
	valorGrat= salariobase * 0.05;
	valorImposto= salariobase * 0.07;
	novosal= salariobase + valorGrat - valorImposto;
	
	printf("\nO valor da gratificação é:  %0.2f R$",valorGrat);
	printf("\nO valor do imposto é:  %0.2f R$",valorImposto);
	printf("\nO salário a receber é: %0.2f R$",novosal);
	
	getchar();
	return 0;
}