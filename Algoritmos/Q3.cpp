//Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer fornecidos pelo usu�rio.

#include <stdio.h>

int main(){
	
	int m, n1, n2, n3, soma;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &n1);
		
	printf("Digite o segundo numero:");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero:");
	scanf("%d", &n3);
	
	soma = n1 + n2 + n3;
	m = soma / 3;
	
	printf("Media aritmetica:%d", m);
	
	
	
	
	
	
	
	
}
