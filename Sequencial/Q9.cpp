/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de
vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha
15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final
do m�s, com duas casas decimais.*/

#include<stdio.h>

int main(){
	char nome[30];
	double salarioF, vendas, total;
	
	printf("Digite seu nome: ");
	fgets(nome, 100, stdin);
	
	printf("Digite o salario fixo: ");
	scanf("%lf", &salarioF);
	
	printf("Digite o numero de vendas efetuadas(em dinheiro):  ");
	scanf("%lf", &vendas);
	
	total = salarioF + vendas * 0.15;
	printf("Total a receber no fim do mes: %.2lf", total);
}
