/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem: PROD = “valor de PROD”*/

#include<stdio.h>

int main(){
	int V1, V2, prod;
	
	printf("Primeiro Valor: ");
	scanf("%d", &V1);
	printf("Segundo Valor: ");
	scanf("%d", &V2);
	prod = V1 * V2;
	printf("PROD = %d", prod);
}
