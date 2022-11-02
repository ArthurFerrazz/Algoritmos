/*Faça um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
o seu programa pede dois valores numéricos e realiza a operação, mostrando o
resultado.*/

#include <stdio.h>

int main (){
    int i;
    float numero[2], calculo;
    
    printf("Escolha uma das opcoes a baixo :\n");
    printf("(1)a + b = x\n(2)a - b = x\n(3)a * b = x\n(4)a / b = x\n");
    scanf("%d",&i);
   
    if(i >= 5 || i <= 0 ){
        printf("Opcao nao selecionada ");
    }
	else{
    printf("Me forneca os numeros\n");
    printf("Numeros: ");
    scanf("%f",&numero[0]);
    printf("Numeros: ");
    scanf("%f",&numero[1]);

        switch (i){
        case 1:
            calculo = numero[0] + numero[1]; 
            printf("O calculo escolhido foi a + b = x\n resultado: %.2f",calculo);
            break;
            
            case 2:
            calculo = numero[0] - numero[1] ;
        printf("O calculo escolhido foi a - b = x\n resultado: %.2f",calculo);
            break;
            
            case 3:
            calculo = numero[0] * numero[1]; 
        printf("O calculo escolhido foi a * b = x\n resultado: %.2f",calculo);
            break;
            
            case 4:
            calculo = numero[0] / numero[1] ;
        printf("O calculo escolhido foi a / b = x\n resultado %.2f",calculo);
            break;
            
            default:
            break;
        }
    }
}
