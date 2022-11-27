/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”.*/

#include<stdio.h>

int main(){
	int A, B, X;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	X = A + B;
	printf("%d + %d = %d", A, B, X);
}

