#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ola! Este programa diz qual e o seu signo.\n");
    
    int dia, mes;
    
    printf("\nDigite o dia do seu nascimento: \n");
    scanf("%d", &dia);
    
    printf("\nDigite o mes do seu nascimento: \n");
    scanf("%d", &mes);
    
    switch(mes){
        case 1:
            if(dia >= 20){
                printf("\nSeu signo e AQUARIO!");
            }else{
                printf("\nSeu signo e CAPRICORNIO!");	
            }
            break;
        case 2:
            if(dia >= 19){
                printf("\nSeu signo e PEIXES!");
            }else{
                printf("\nSeu signo e AQUARIO!");	
            }
            break;
        case 3:
            if(dia >= 21){
                printf("\nSeu signo e ARIES!");
            }else{
                printf("\nSeu signo e PEIXES!");	
            }
            break;
        case 4:
            if(dia >= 20){
                printf("\nSeu signo e TOURO!");
            }else{
                printf("\nSeu signo e ARIES!");	
            }
            break;
        case 5:
            if(dia >= 21){
                printf("\nSeu signo e GEMEOS!");
            }else{
                printf("\nSeu signo e TOURO!");	
            }
            break;
        case 6:
            if(dia >= 21){
                printf("\nSeu signo e CANCER!");
            }else{
                printf("\nSeu signo e GEMEOS!");	
            }
            break;
        case 7:
            if(dia >= 23){
                printf("\nSeu signo e LEAO!");
            }else{
                printf("\nSeu signo e CANCER!");	
            }
            break;
        case 8:
            if(dia >= 23){
                printf("\nSeu signo e VIRGEM!");
            }else{
                printf("\nSeu signo e LEAO!");	
            }
            break;
        case 9:
            if(dia >= 23){
                printf("\nSeu signo e LIBRA!");
            }else{
                printf("\nSeu signo e VIRGEM!");	
            }
            break;
        case 10:
            if(dia >= 23){
                printf("\nSeu signo e ESCORPIAO!");
            }else{
                printf("\nSeu signo e LIBRA!");	
            }
            break;
        case 11:
            if(dia >= 22){
                printf("\nSeu signo e SAGITARIO!");
            }else{
                printf("\nSeu signo e ESCORPIAO!");	
            }
            break;
        case 12:
            if(dia >= 22){
                printf("\nSeu signo e CAPRICORNIO!");
            }else{
                printf("\nSeu signo e SAGITARIO!");	
            }
            break;
        default:
            printf("\nMes invalido!");
    }
    
    return 0;
}
