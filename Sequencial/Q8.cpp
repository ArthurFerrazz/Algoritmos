/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
C * D). Apresente o resultado da seguinte forma: 
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = “vaor de DIFERENCA*/

#include<stdio.h>

int main(){
	int A, B, C, D, dife;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	printf("Digite o valor de C: ");
	scanf("%d", &C);
	printf("Digite o valor de D: ");
	scanf("%d", &D);
	
	dife = A * B - C * D;
	printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
	printf("DIFERENCA = %d", dife);
}
