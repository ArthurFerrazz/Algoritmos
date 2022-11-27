/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
do mês, com duas casas decimais.*/

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
