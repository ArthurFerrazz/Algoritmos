//Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de 
//matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora 
//e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados 
//de entrada e os dados de sa�da.

#include <stdio.h>

int main(){
	char nome[100];
	char sexo;
	int matricula, nHorasTrabalhadas;
	float valorPorHora, salario;
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Digite a matricula: ");
	scanf("%d", &matricula);
	
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d", &nHorasTrabalhadas);
	
	printf("Digite o valor por hora: ");
	scanf("%f", &valorPorHora);
	
	salario = nHorasTrabalhadas * valorPorHora;
	
	printf("Funcionario: %s\n", nome);
	printf("Numero de matricula: %d\n", matricula);
	printf("Numero de horas trabalhadas: %d\n", nHorasTrabalhadas);
	printf("Valor por hora trabalhada: %.2f\n", valorPorHora);
	printf("--------------------------\n");
	printf("O salario total eh: %.2f", salario);
	
	
	
	
}
