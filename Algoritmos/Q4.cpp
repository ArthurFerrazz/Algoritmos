//Construa um algoritmo que a partir da leitura de dois números forneça o resto e o quociente da divisão do primeiro pelo segundo número.

#include <stdio.h>

int main(){
	int n1, n2;
	int resto, quociente;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	resto = n1 % n2;
	printf("O resto da divisao: %d\n", resto);
	
	quociente = n1 / n2;
	printf("O quociente da divisao: %d", quociente);	
	
}
