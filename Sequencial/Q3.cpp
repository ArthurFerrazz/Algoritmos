/*Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valor”*/

#include<stdio.h>
#include<stdbool.h>
#define zero 0

int main(){
	int nI, boleano;
	float nF;
	double nD;
	char letra, string[30];
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &nI);
	
	printf("Digite dois numeros reais: ");
	scanf("%f%lf", &nF,&nD);
	fflush(stdin);
	
	printf("Digite apenas um caracter: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	printf("Digite uma frase: ");
	fgets(string, 30, stdin);
	
	printf("Digite um numero positivo ou negativo: ");
	scanf("%d", &boleano);
	
	printf("-------------------------------------");
	printf("\nNumero inteiro: %d\n", nI);
	printf("Numeros reais:\n%.2f\n%.2fl\n", nF, nD);
	printf("Caracter: %c\n", letra);
	printf("String: %s", string);
	
	if (boleano > zero)
	printf("Numero: Positivo");
	else printf("Numero: Negativo");
}

