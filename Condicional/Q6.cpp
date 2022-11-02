/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
? Homens: (72,7 * h) – 58
? Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
    float altura=0.0, homem, mulher; 
    char sexo;
    
    printf("Qual e seu sexo (M)asculino (F)eminino :");
    scanf("%s",&sexo);
                                                                       
    printf("Qual a sua altura :");
    scanf("%f",&altura);              
    
    if (sexo =='M'||sexo =='m'||sexo =="masculino"||sexo == "Masculino"){
       homem = (72.7 * altura) - 58;
       printf("Sua altura ideal e %.2f",homem);    
    }
    else if(sexo == 'f'||sexo =='F'||sexo =="feminino"||sexo == "Feminino"){
        mulher = (62.1 * altura) - 44.7;
        printf("Sua altura ideal e %.2f",mulher);
    }else{
        printf("Voce nao informou seu sexo logo nao foi possivel calcular sua altura ideal");
    }
    
}
