/*Faça um algoritmo que imprima o poema abaixo, com a mesma formatação:
Caderno de poesias é um belo lugar.
Tantas coisas lindas que eu gostaria de falar.
Eu falo em forma de versos para todos poderem escutar.
Agora você já sabe por que os poetas passam os dias escrevendo em seus
cadernos de poesias.*/

#include <stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Caderno de poesias é um belo lugar.\n");
	printf("Tantas coisas lindas que eu gostaria de falar.\n");
	printf("Eu falo em forma de versos para todos poderem escutar.\n");
	printf("Agora você já sabe por que os poetas passam os dias escrevendo em seus\n");
	printf("cadernos de poesias.");
}
