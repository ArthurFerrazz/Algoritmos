// Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o correspondente em minutos e segundos destas horas.

#include <stdio.h>

int main(){
	
	int h, m, s;
	
	printf("Digite as Horas: ");
	scanf("%d", &h);
    m = h * 60;
	
	printf("minutos = %d\n", m);
    s = m * 60;
	
	printf("segundos = %d\n", s);
		
}

