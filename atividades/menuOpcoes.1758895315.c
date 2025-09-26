#include <stdio.h>
#include <stdlib.h>

int main(){
	int menuNum;
	float salario;
	
    printf("Ola! Menu Opcoes(digite a opcao desejada): \n");
    
    printf("\n1-Imposto\n\n2-Novo Salario\n\n3-Classificacao\n\nDigite aqui sua opcao: ");
    scanf("%d", &menuNum);

    switch(menuNum){
        case 1:
        	printf("Digite o valor do salario do funcionario: \n");
        	scanf("%f", &salario);
            if(salario < 500){
            	salario = salario * 0.05;
                printf("Valor do imposto: %.2f", salario);
            }else if(salario >= 500 && salario <850){
                salario = salario * 0.10;
                printf("Valor do imposto: %.2f", salario);	
            }else{
            	salario = salario * 0.15;
            	printf("Valor do imposto: %.2f", salario);	
			}
            break;
        case 2:
        	printf("Digite o valor do salario do funcionario: \n");
        	scanf("%f", &salario);
			if(salario > 1500){
            	salario = salario + 25;
                printf("Valor do novo salario: %.2f", salario);
            }else if(salario >= 750 && salario <= 1500){
                salario = salario + 50;
                printf("Valor do novo salario: %.2f", salario);	
            }else if(salario >= 450 && salario <= 749){
                salario = salario + 75;
                printf("Valor do novo salario: %.2f", salario);	
            }else{
            	salario = salario + 100;
            	printf("Valor do novo salario: %.2f", salario);	
			}
            break;
        case 3:
          	printf("Digite o valor do salario do funcionario: \n");
        	scanf("%f", &salario);
            if(salario <= 700){
                printf("Mal remunerado: %.2f", salario);
            }else{
            	printf("Bem remunerado: %.2f", salario);	
			}
            break;
        default:
            printf("\nOpcao invalida!");
    }
    
    return 0;
}
